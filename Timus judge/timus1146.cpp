#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)

ll a[200][200];

ll submatrixsum(ll x,ll y,ll n)
{

     ll sum[200];

     memset(sum,0,sizeof sum);

     for(ll i=0;i<n;i++)
     {
          for(ll j=x;j<=y;j++)
          {
               sum[i]+= a[i][j];
          }
     }

     ll ans=INT_MIN,l=0;

     for(ll i=0;i<n;i++)
     {
          l+=sum[i];

          ans=max(ans,l);

          if(l<0) l=0;
     }

     return ans;
}

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);


   ll n,m,i,j,k,l,ans=INT_MIN;

   cin>>n;

   for(i=0;i<n;i++)
   {
        for(j=0;j<n;j++)
        {
             cin>>a[i][j];
        }
   }


   for(i=0;i<n;i++)
   {
        for(j=i;j<n;j++)
        {
             ans=max(ans,submatrixsum(i,j,n));
        }
   }

   cout<<ans<<endl;

   return 0;
}
