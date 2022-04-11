#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);


   ll a,s,b,n,m,i,j,k,l,ans=-1e16;

   cin>>n>>a>>b;

   ll x[n+5];

   for(i=0;i<n;i++)
   {
        cin>>x[i];
        ans=max(ans,a*x[i]+b);
   }

   s=0;

   for(i=0;i<n;i++)
   {
        s+=x[i];
        if(s>=0)
        {
             ans=max(ans,a*s+b);
        }
        else s=0;
   }

   s=0;

   for(i=0;i<n;i++)
   {
        s+=x[i];
        if(s<=0)
        {
             ans=max(ans,a*s+b);
        }
        else s=0;
   }


   cout<<ans<<endl;

   return 0;
}
