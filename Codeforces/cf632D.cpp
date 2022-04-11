/***
 created: 2021-12-07-16.10.00
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'

ll x[1000005],c[1000005];

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);


   ll n,m,i,j,k,l;

   cin>>n>>m;

   ll a[n+4];

   for(i=1;i<=n;i++)
   {
        cin>>a[i];
        if(a[i]<=m) x[a[i]]++;
   }

   for(i=1;i<=m;i++)
   {
        for(j=i;j<=m;j+=i)
        {
             c[j]+=x[i];
        }
   }

   ll ans=INT_MIN;

   for(i=1;i<=m;i++)
   {
        if(c[i]>ans)
        {
             ans=c[i];
             k=i;
        }
   }

   cout<<k<<" "<<ans<<nl;

   for(i=1;i<=n;i++)
   {
        if(k%a[i]==0) cout<<i<<" ";
   }

   cout<<nl;

   get_lost_idiot;
}
