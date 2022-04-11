#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int a[300005];
ll tree[1200005];
ll maxx[1200005];
int d[1000005];
void div()
{
    for(int i=1; i<=1000000; i++)
    {
        for(int j=i; j<=1000000; j+=i) d[j]++;
    }
}

void treeconstruct(ll node,ll b,ll e)
{

    if(b==e)
    {
        tree[node]=maxx[node]=a[b];
        return;
    }

    ll left = node*2;
    ll right = node*2 + 1ll;

    ll mid=(b+e)/2;

    treeconstruct(left,b,mid);
    treeconstruct(right,mid+1,e);

    tree[node]=tree[left]+tree[right];
    maxx[node]=max(maxx[left],maxx[right]);
}

void update(ll node,ll b,ll e,ll i,ll j)
{
    if(i>e || j<b) return;

    if(maxx[node]<=2) return;

    if(b==e)
    {
        tree[node]=maxx[node]=d[tree[node]];
        return;
    }

    ll left = node*2;
    ll right = node*2 + 1ll;

    ll mid=(b+e)/2;

    update(left,b,mid,i,j);

    update(right,mid+1,e,i,j);

    tree[node]=tree[left]+tree[right];
    maxx[node]=max(maxx[left],maxx[right]);

}

ll queries(ll node,ll b,ll e,ll i,ll j)
{
    if(i>e || j<b) return 0;

    if(b>=i && e<=j) return tree[node];


    ll left = node*2;
    ll right = node*2 + 1ll;

    ll mid=(b+e)/2;

    ll x=queries(left,b,mid,i,j);

    ll y=queries(right,mid+1,e,i,j);

    return x+y;

}



int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    div();

    ll n,m,i,j,k,l;

    cin>>n>>m;

    for(i=1; i<=n; i++) cin>>a[i];

    treeconstruct(1,1,n);

    while(m--)
    {
        cin>>j>>k>>l;

        if(j==1) update(1, 1, n, k, l);
        else cout<<queries(1, 1, n, k, l)<<'\n';
    }

    return 0;
}

