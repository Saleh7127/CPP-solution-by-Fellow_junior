#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);


   ll n,m,i,j,k,l=1;
   cin>>n>>m;
   ll a[n+5];
   for(i=0;i<n;i++)
   {
       cin>>a[i];
   }
   if(n>m) cout<<0<<endl;
   else
   {
       for(i=0;i<n;i++)
       {
           for(j=i+1;j<n;j++)
           {
               k=abs(a[i]-a[j])%m;
               l=(l%m*k%m)%m;
           }
       }
       cout<<l<<endl;
   }

   return 0;
}
