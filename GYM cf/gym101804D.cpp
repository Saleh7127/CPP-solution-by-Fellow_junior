#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
double a[200005];
double tree[800005];

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

    tree[node]=tree[left]+tree[right];

}

void update(ll node,ll b,ll e,ll i,double newv)
{
    if(i>e || i<b) return;

    if(b==e)
    {
        tree[node]=newv;
        return;
    }

    ll left = node*2;
    ll right = node*2 + 1ll;

    ll mid=(b+e)/2;

    update(left,b,mid,i,newv);

    update(right,mid+1,e,i,newv);

    tree[node]=tree[left]+tree[right];

}

double queries(ll node,ll b,ll e,ll i,ll j)
{
    if(i>e || j<b) return 0.0;

    if(b>=i && e<=j) return tree[node];

    ll left = node*2;
    ll right = node*2 + 1ll;

    ll mid=(b+e)/2;

    return queries(left,b,mid,i,j)+queries(right,mid+1,e,i,j);
}



int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    ll q,n,m,i,j,l;

    cin>>n;
    double k,ans;
    for(i=1;i<=n;i++) cin>>a[i];
    cin>>q;

    treeconstruct(1,1,n);


    while(q--)
    {
         cin>>i;
         if(i==1)
         {
              cin>>j>>k;
              update(1,1,n,j,k);
         }
         else
         {
              cin>>j>>l;
              ans=queries(1,1,n,j,l)/(double)(l-j+1);

              cout<<fixed<<setprecision(6)<<ans<<endl;
         }
    }

    return 0;
}

