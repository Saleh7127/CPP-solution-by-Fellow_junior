#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll a,b,c,d=0,i,j,k,l=998244353;
   cin>>a>>b>>c;

   for(i=1;i<=a;i++)
   {
       for(j=1;j<=b;j++)
       {
           for(k=1;k<=c;k++)
           {
               d+=(i*j*k)%l;
           }
       }
   }

   cout<<d<<endl;
   return 0;
}
