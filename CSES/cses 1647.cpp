#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
ll a[200005];
ll tree[600005];
ll mod=1e9+7;
void treeconstruct(ll node,ll b,ll e)
{

    if(b==e)
    {
        tree[node]=a[b];
        return;
    }

    ll left = node*2;
    ll right = node*2 + 1ll;

    ll mid=(b+e)/2;

    treeconstruct(left,b,mid);
    treeconstruct(right,mid+1,e);

    tree[node]=min(tree[left],tree[right]);

}

ll queries(ll node,ll b,ll e,ll i,ll j)
{
    if(i>e || j<b) return INT_MAX;

    if(b>=i && e<=j) return tree[node];

    ll left = node*2;
    ll right = node*2 + 1ll;

    ll mid=(b+e)/2;

    ll x=queries(left,b,mid,i,j);

    ll y=queries(right,mid+1,e,i,j);

    return min(x,y);
}
/*
void update(ll node,ll b,ll e,ll i,ll newv)
{
    if(i>e || i<b) return;

    if(b==e && e==i)
    {
        tree[node]+=newv;
        return;
    }

    ll left = node*2;
    ll right = node*2 + 1ll;

    ll mid=(b+e)/2;

    update(left,b,mid,i,newv);

    update(right,mid+1,e,i,newv);

    tree[node]=min(tree[left],tree[right]);

}
*/
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    ll q,n,m,i,j,k,l;

    cin>>n>>q;

    for(i=1;i<=n;i++) cin>>a[i];

    treeconstruct(1,1,n);

    while(q--)
    {
         cin>>j>>k;

         queries(1,1,n,j,k);

         cout<<queries(1,1,n,j,k)<<endl;
    }

    return 0;
}

