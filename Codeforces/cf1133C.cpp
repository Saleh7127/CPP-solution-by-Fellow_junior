#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll b,c,d,e,f,i,j,k,l;
   cin>>b;
   ll a[b+5];
   for(i=0;i<b;i++)
   {
       cin>>a[i];
   }
   sort(a,a+b);

   d=0;
   j=0;
   for(i=0;i<b;i++)
   {
       while(j<b && a[j]-a[i]<=5)
       {
           j++;

       }
       d=max(d,j-i);
   }

   cout<<d<<endl;

   return 0;
}
