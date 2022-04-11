#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'

vector<ll>g[100005];
ll a[200020];
ll tree[800050];
ll st[100005];
ll fn[100005];
bool v[100005];
ll blift[100005][20];
ll depth[100005];
ll tim=1,lg,n;
ll val[100005];

void eulerpath(ll node)
{
    st[node]=tim;
    tim++;
    v[node]=1;
    for(auto d:g[node])
    {
        if(v[d]==0)
        {
            eulerpath(d);
        }
    }
    fn[node]=tim;
    tim++;
}

void dfs(ll node)
{
    v[node]=1;
    for(int d:g[node])
    {
        if(v[d]==0)
        {
            depth[d]=depth[node]+1;
            blift[d][0]=node;
            dfs(d);
        }
    }
}

void binarylifting()
{
    for(ll j=1; j<=lg; j++)
    {
        for(ll i=1; i<=n; i++)
        {
            if(blift[i][j-1]!=-1)
            {
                ll par = blift[i][j-1];

                blift[i][j] = blift[par][j-1];
            }
        }
    }
}

ll lca(ll a,ll b)
{
    if(depth[a]<depth[b]) swap(a,b);

    ll k=depth[a]-depth[b];

    for(ll j=lg-1; j>=0; j--)
    {
        if(k &(1<<j))
        {
            a=blift[a][j];
        }
    }

    if(a==b)
    {
        return a;
    }

    for(ll j=lg-1; j>=0; j--)
    {
        if(blift[b][j]!=-1 &&  blift[a][j]!=blift[b][j])
        {
            a=blift[a][j];
            b=blift[b][j];
        }
    }

    return blift[a][0];
}


void treeconstruct(ll node,ll b,ll e)
{
    if(b==e)
    {
        tree[node]=a[b];
        return;
    }
    ll left = node*2;
    ll right = left|1ll;
    ll mid=(b+e)/2;
    treeconstruct(left,b,mid);
    treeconstruct(right,mid+1,e);
    tree[node]=tree[left]+tree[right];
}

void update(ll node,ll b,ll e,ll i,ll newv)
{
    if(i>e || i<b) return;
    if(b==e)
    {
        tree[node]=newv;
        return;
    }
    ll left = node*2;
    ll right = left|1ll;
    ll mid=(b+e)/2;
    update(left,b,mid,i,newv);
    update(right,mid+1,e,i,newv);
    tree[node]=tree[left]+tree[right];
}

ll queries(ll node,ll b,ll e,ll i,ll j)
{
    if(i>e || j<b) return 0;
    if(b>=i && e<=j) return tree[node];
    ll left = node*2;
    ll right = left|1ll;
    ll mid=(b+e)/2;
    ll x=queries(left,b,mid,i,j);
    ll y=queries(right,mid+1,e,i,j);
    return x+y;
}

void clr()
{
    tim=1;
    for(ll i=0; i<=n+2; i++)
    {
        g[i].clear();
        depth[i]=0;
        v[i]=0;
        val[i]=0;
        for(ll j=0;j<20;j++)
        {
             blift[i][j]=-1;
        }
    }
    //memset(blift,-1,sizeof blift);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    while(cin>>n && n)
    {
        ll q,m,i,j,k,l,root,ans;

        lg=log2(n)+1;

        clr();

        for(i=2; i<=n; i++)
        {
            cin>>k>>val[i];
            k++;
            g[i].push_back(k);
            g[k].push_back(i);
        }

        eulerpath(1);
        memset(v,0,sizeof v);
        dfs(1);
        binarylifting();

        for(i=1; i<=n; i++)
        {
            a[st[i]]=val[i];
            a[fn[i]]=-val[i];
        }

        treeconstruct(1,1,2*n);

        cin>>q;

        while(q--)
        {
            cin>>j>>k;

            j++,k++;

            if(st[j]>st[k]) swap(j,k);

            root=lca(j,k);

            ll j1=queries(1,1,2*n,st[root],st[j]);
            ll k1=queries(1,1,2*n,st[root],st[k]);

            ans = j1 + k1 - 2*val[root];

            if(q) cout<<ans<<" ";
            else cout<<ans<<nl;
        }

        cout<<blift[1][0]<<nl;
    }

    get_lost_idiot;
}

