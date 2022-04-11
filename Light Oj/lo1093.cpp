#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
ll a[100005];
ll tree1[400005];
ll tree2[400005];
void treeconstruct(ll node,ll b,ll e)
{

    if(b==e)
    {
        tree1[node]=a[b];
        tree2[node]=a[b];
        return;
    }

    ll left = node*2;
    ll right = node*2 + 1ll;

    ll mid=(b+e)/2;

    treeconstruct(left,b,mid);
    treeconstruct(right,mid+1,e);

    tree1[node]=max(tree1[left],tree1[right]);
    tree2[node]=min(tree2[left],tree2[right]);

}

ll queriesmax(ll node,ll b,ll e,ll i,ll j)
{
    if(i>e || j<b) return 0;

    if(b>=i && e<=j) return tree1[node];


    ll left = node*2;
    ll right = node*2 + 1ll;

    ll mid=(b+e)/2;

    ll x=queriesmax(left,b,mid,i,j);

    ll y=queriesmax(right,mid+1,e,i,j);

    return max(x,y);

}

ll queriesmin(ll node,ll b,ll e,ll i,ll j)
{
    if(i>e || j<b) return INT_MAX;

    if(b>=i && e<=j) return tree2[node];


    ll left = node*2;
    ll right = node*2 + 1ll;

    ll mid=(b+e)/2;

    ll x=queriesmin(left,b,mid,i,j);

    ll y=queriesmin(right,mid+1,e,i,j);

    return min(x,y);

}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    test
    {
        ll q,n,m,i,j,k,l=0;

        cin>>n>>q;

        for(i=1; i<=n; i++) cin>>a[i];

        cout<<"Case "<<cs<<":"<<endl;

        treeconstruct(1ll,1ll,n);

        for(i=1;i<=(n-q);i++)
        {
             j=queriesmax(1,1,n,i,i+q-1);
             k=queriesmin(1,1,n,i,i+q-1);
             l=max(l,j-k);
        }

        cout<<"Case "<<cs<<": "<<l<<endl;

    }

    return 0;
}
