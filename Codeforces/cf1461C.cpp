#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   test
   {

       ll n,m,i,k=0,l=0,b;

       cin>>n>>m;

       ll a[n+5];

       for(i=1;i<=n;i++)
       {
           cin>>a[i];
           if(a[i]!=i)
           {
               l=max(l,i);
           }
       }
       double c,x=1.0;
       double j=0.0;
       for(i=1;i<=m;i++)
       {
           cin>>b>>c;
           if(b>=l)
           {
               x*=(1.00-c);
           }

       }
       if(l==0) printf("1.000000\n");
       else
       {
           printf("%.6lf\n",1.000-x);
       }
   }


   return 0;
}
