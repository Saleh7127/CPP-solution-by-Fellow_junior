/***
 created: 2022-01-16-19.15.58
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'

ll a[200005];
ll tree[800005];

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

    tree[node]=max(tree[left],tree[right]);
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

    return max(x,y);
}

ll leftside(ll l,ll r,ll x,ll n)
{
     ll ans=0;

     ll lo=l,hi=r;

     while(lo<=hi)
     {
          ll mid=(lo+hi)/2;

          if(queries(1,1,n,mid,r)>x)
          {
               ans=mid;
               lo=mid+1;
          }
          else hi=mid-1;
     }
     return ans;
}

ll rightside(ll l,ll r,ll x,ll n)
{
     ll ans=n+1;

     ll lo=l,hi=r;

     while(lo<=hi)
     {
          ll mid=(lo+hi)/2;

          if(queries(1,1,n,l,mid)>x)
          {
               ans=mid;
               hi=mid-1;
          }
          else lo=mid+1;
     }
     return ans;
}



int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);


   ll n,m,i,j,k,l;

   cin>>n;

   for(i=1;i<=n;i++)
   {
        cin>>a[i];
   }

   treeconstruct(1,1,n);

   ll ans=0;

   for(i=1;i<=n;i++)
   {
        ll l1,l2,r1,r2;

        l1=leftside(1,i-1,a[i],n);
        l2=leftside(1,l1-1,a[i],n);
        r1=rightside(i+1,n,a[i],n);
        r2=rightside(r1+1,n,a[i],n);

        m=0;

        m+=(l1-l2)*(r1-i);
        m+=(r2-r1)*(i-l1);

        ans+=(m*a[i]);
   }

   cout<<ans<<nl;

   get_lost_idiot;
}
