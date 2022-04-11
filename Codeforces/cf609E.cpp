/***
 created: 2022-02-08-17.33.10
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'

struct edge
{
    ll u,v,w,in;
};

bool cmp1(edge aa,edge bb)
{
    return aa.w < bb.w;
}

bool cmp2(edge aa,edge bb)
{
    return aa.in < bb.in;
}

vector<pair<ll,ll>>g[200005];
edge a[200005];
ll parent[200005];
ll blift[200005][21];
ll mx[200005][21];
ll depth[200005];
bool v[200005];
ll n,lg;

ll findparent(ll u)
{
    if (u == parent[u]) return u;

    return parent[u] = findparent(parent[u]);
}

void dfs(ll node)
{
    v[node]=1;
    for(auto d:g[node])
    {
        if(v[d.first]==0)
        {
            depth[d.first]=depth[node]+1;
            blift[d.first][0]=node;
            mx[d.first][0]=d.second;
            dfs(d.first);
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

                mx[i][j] = max( mx[i][j-1], mx[par][j-1] );
            }
        }
    }
}

ll maxedge(ll a,ll b)
{
    ll mxr=INT_MIN;

    if(depth[a]<depth[b]) swap(a,b);

    ll k=depth[a]-depth[b];

    for(ll j=lg-1; j>=0; j--)
    {
        if(k &(1<<j))
        {
            mxr= max(mxr, mx[a][j]);
            a=blift[a][j];
        }
    }

    if(a==b)
    {
        return mxr;
    }

    for(ll j=lg-1; j>=0; j--)
    {
        if(blift[b][j]!=-1 &&  blift[a][j]!=blift[b][j])
        {
            mxr= max(mxr,max(mx[a][j], mx[b][j]));
            a=blift[a][j];
            b=blift[b][j];
        }
    }

    mxr= max(mxr,max(mx[a][0], mx[b][0]));

    return mxr;
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    ll m,i,j,k,l,mst=0;

    cin>>n>>m;

    lg=log2(n)+1;

    for(i=0; i<m; i++)
    {
        cin>>a[i].u>>a[i].v>>a[i].w;
        a[i].in=i;
    }

    sort(a,a+m,cmp1);

    for(i=0; i<=n; i++) parent[i]=i;

    for(i=0; i<m; i++)
    {
        ll u= a[i].u;
        ll v=a[i].v;
        ll w=a[i].w;

        ll p1=findparent(u);
        ll p2=findparent(v);

        if(p1!=p2)
        {
             mst+=w;
             parent[p2]=p1;
             g[u].push_back({v,w});
             g[v].push_back({u,w});
        }
    }

    memset(blift,-1,sizeof blift);
    dfs(1);
    binarylifting();

    sort(a,a+m,cmp2);

    for(i=0;i<m;i++)
    {
         ll ans=mst - maxedge(a[i].u,a[i].v)+a[i].w;
         cout<<ans<<nl;
    }

    get_lost_idiot;
}

