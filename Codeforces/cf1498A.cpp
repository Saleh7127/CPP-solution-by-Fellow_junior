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

       ll a,b,c,d,i;
       cin>>a;

       c=a;
       for(i=a; ; i++)
       {
           ll sum=0;
           c=i;
           while(c>0)
           {
               sum+=(c%10);
               c/=10;
           }
           d=__gcd(i,sum);
           if(d>1) break;

       }
       cout<<i<<endl;
   }


   return 0;
}
