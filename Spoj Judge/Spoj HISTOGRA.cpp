#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
ll a[200005];
pair<ll,ll> tree[800005];

void treeconstruct(ll node,ll b,ll e)
{

    if(b==e)
    {
        tree[node]={a[b],b};
        return;
    }

    ll left = node*2;
    ll right = node*2 + 1ll;

    ll mid=(b+e)/2;

    treeconstruct(left,b,mid);
    treeconstruct(right,mid+1,e);

    tree[node]=min(tree[left],tree[right]);

}

pair<ll,ll> queries(ll node,ll b,ll e,ll i,ll j)
{
    if(i>e || j<b) return {INT_MAX,INT_MAX};

    if(b>=i && e<=j) return tree[node];

    ll left = node*2;
    ll right = node*2 + 1ll;

    ll mid=(b+e)/2;

    //pair<ll,ll> x=queries(left,b,mid,i,j);

    //pair<ll,ll> y=queries(right,mid+1,e,i,j);

    //return min(x,y);

    return min(queries(left,b,mid,i,j),queries(right,mid+1,e,i,j));
}

ll solve(ll b,ll e,ll n)
{
     if(b>e) return 0ll;

     pair<ll,ll>x=queries(1,1,n,b,e);

     ll k=(e-b+1)*x.first;
     ll l=max(solve(b,x.second-1,n),solve(x.second+1,e,n));

     return max(k,l);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n;
    while(cin>>n && n)
    {
        ll m,i,j,k,l;

       // cin>>n;

        for(i=1; i<=n; i++)
        {
           cin>>a[i];
        }

        treeconstruct(1ll,1ll,n);

        cout<<solve(1ll,n,n)<<endl;

    }

    return 0;
}


