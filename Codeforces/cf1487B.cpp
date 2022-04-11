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

       ll a,b,c,d,e,f;

       cin>>a>>b;

       if(a%2==0)
       {
           if(b%a!=0)
           {
               cout<<b%a<<endl;
           }
           else
           {
               cout<<a<<endl;
           }
       }
       else
       {
           c=(a-1)/2;
           d=(b-1)/c;
           if((b+d)%a!=0)
           {
               cout<<(b+d)%a<<endl;
           }
           else
           {
               cout<<a<<endl;
           }
       }
   }



   return 0;
}
