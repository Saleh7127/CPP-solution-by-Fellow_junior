#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)

ll a[100005];
ll tree[400005];
ll lf[100005],rf[100005];


void treeconstruct(ll node,ll b,ll e)
{

    if(b==e)
    {
        tree[node]=lf[b];
        return;
    }

    ll left = node*2;
    ll right = node*2 + 1ll;

    ll mid=(b+e)/2;

    treeconstruct(left,b,mid);
    treeconstruct(right,mid+1,e);

    tree[node]=max(tree[left],tree[right]);

}

ll queries(ll node,ll b,ll e,ll i,ll j)
{
    if(i>e || j<b) return INT_MIN;

    if(b>=i && e<=j) return tree[node];


    ll left = node*2;
    ll right = node*2 + 1ll;

    ll mid=(b+e)/2;

    ll x=queries(left,b,mid,i,j);

    ll y=queries(right,mid+1,e,i,j);

    return max(x,y);

}



int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    ll n,q,i,j,k,l,r;

    while(cin>>n && n)
    {
         cin>>q;

         for(i=1;i<=n;i++)
         {
              cin>>a[i];

              if(i>1 && a[i]==a[i-1])
              {
                   lf[i]=lf[i-1]+1;
              }
              else lf[i]=1;
         }

         for(i=n;i>=1;i--)
         {
              if(i<n && a[i]==a[i+1])
              {
                   rf[i]=rf[i+1]+1;
              }
              else rf[i]=1;
         }

         treeconstruct(1ll,1ll,n);

         while(q--)
         {
              cin>>l>>r;

              if(a[l]==a[r]) cout<<(r-l+1)<<endl;
              else
              {
                   k=queries(1,1,n,l+rf[l],r);

                   cout<<max(k,rf[l])<<endl;
              }
         }

    }


    return 0;
}
