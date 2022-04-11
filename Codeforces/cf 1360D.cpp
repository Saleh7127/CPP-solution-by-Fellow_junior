#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
int main()
{
   test
   {
       ll a,c,d,e,f,i,j,k,l;
       cin>>a>>c;
       d=a;
       for(i=1;i*i<=a;i++)
       {
           if(a%i==0)
           {
               if(a/i<=c)
               {
                   d=min(d,i);
               }
               if(i<=c)
               {
                   d=min(d,a/i);
               }
           }
       }
       cout<<d<<endl;
   }
   return 0;
}
