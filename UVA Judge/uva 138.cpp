#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; while(t--)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll a,c=0,e=8;
   double d;
   while(c<10)
   {
       d=sqrt((e*e+e)/2);
       a=d;
       if(d==a)
       {
           printf("%10lld%10lld\n",a,e);
           c++;
       }
       e++;
   }


   return 0;
}
