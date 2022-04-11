#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);


   ll n,m;
   cin>>n>>m;

   ll a[n+5];
   ll b[m+5],c,d,e,f,i,j,k,l;

   c=0;
   d=0;
   for(i=0;i<n;i++)
   {
       cin>>a[i];
       c=__gcd(c,a[i]);
   }
   for(i=0;i<m;i++)
   {
       cin>>b[i];
       if(b[i]%c!=0)
       {
           d=1;
       }
   }
   if(d==0)
   {
       for(i=0;i<m;i++)
       {
           cout<<b[i]+c<<" ";
       }
   }
   else
   {
       for(i=0;i<m;i++)
       {
           cout<<1<<" ";
       }
   }
   cout<<endl;

   return 0;
}
