#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
ll a[200005];
ll tree[600005];
ll lazy[600005];

void push_down(ll node,ll b,ll e)
{
    if(b!=e)
    {
        lazy[node*2]+=lazy[node];
        lazy[node*2 + 1]+=lazy[node];
    }
    tree[node]+=lazy[node];
    lazy[node]=0;
}

void treeconstruct(ll node,ll b,ll e)
{
    lazy[node]=0;
    if(b==e)
    {
        tree[node]=a[b];
        lazy[node]=0;
        return;
    }
    ll left = node*2;
    ll right = node*2 + 1ll;
    ll mid=(b+e)/2;
    treeconstruct(left,b,mid);
    treeconstruct(right,mid+1,e);
    tree[node]=min(tree[left],tree[right]);
}

void update(ll node,ll b,ll e,ll i,ll j,ll newv)
{
    push_down(node,b,e);
    if(i>e || j<b) return;
    if(b>=i && e<=j)
    {
        lazy[node]+=newv;
        push_down(node,b,e);
        return;
    }
    ll left = node*2;
    ll right = node*2 + 1ll;
    ll mid=(b+e)/2;
    update(left,b,mid,i,j,newv);
    update(right,mid+1,e,i,j,newv);
    tree[node]=min(tree[left],tree[right]);
}

ll queries(ll node,ll b,ll e,ll i,ll j)
{
    push_down(node,b,e);
    if(i>e || j<b) return INT_MAX;
    if(b>=i && e<=j) return tree[node];
    ll left = node*2;
    ll right = node*2 + 1ll;
    ll mid=(b+e)/2;
    ll x=queries(left,b,mid,i,j);
    ll y=queries(right,mid+1,e,i,j);
    return min(x,y);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    ll q,n,m,i,j,k,l;
    char c;

    scanf("%lld",&n);

    for(i=1; i<=n; i++)
    {
        scanf("%lld",&a[i]);

    }

    scanf("%lld",&m);

    treeconstruct(1ll,1ll,n);

    while(m--)
    {
        scanf("%lld %lld%c",&j,&k,&c);


        j++,k++;

        if(c=='\n')
        {
            if(j<=k) printf("%lld\n",queries(1ll,1ll,n,j,k));
            else
            {
                 printf("%lld\n",min(queries(1ll,1ll,n,j,n),queries(1ll,1ll,n,1,k)));
            }
        }

        else
        {
            scanf("%lld",&l);

            if(j<=k) update(1ll,1ll,n,j,k,l);
            else
            {
                 update(1ll,1ll,n,j,n,l);
                 update(1ll,1ll,n,1,k,l);
            }
        }
    }
    return 0;
}

