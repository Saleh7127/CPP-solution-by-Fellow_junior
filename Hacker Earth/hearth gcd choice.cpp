#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll n;
   cin>>n;
   ll a[n];
   for(ll i=0;i<n;i++)
   {
       cin>>a[i];
   }
   ll p[n]={0},s[n]={0};
   ll x=0;

   for(ll i=0;i<n;i++)
   {
       p[i]=__gcd(a[i],x);
       x=p[i];
   }
   x=0;
   for(ll i=n-1;i>=0;i--)
   {
       s[i]=__gcd(a[i],x);
       x=s[i];
   }
   ll ans=0;

   for(ll i=0;i<n;i++)
   {
       if(i==0) ans=max(ans,s[i]);
       else if(i==n-1)
       {
           ans=max(ans,p[n-2]);
       }
       else
       {
           ans=max(ans,__gcd(p[i-1],s[i+1]));
       }
   }
   cout<<ans<<endl;

   return 0;
}
