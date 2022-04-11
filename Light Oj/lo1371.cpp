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
       ll a[10000],b[10000],c,d,e,f,i,j,k=1000000007,l=1;
       cin>>c;
       for(i=1;i<=c;i++)
       {
           cin>>a[i];
       }

       for(i=1;i<=c;i++)
       {
           cin>>b[i];
       }

       sort(a+1,a+c+1);
       sort(b+1,b+c+1);

       for(i=1;i<=c;i++)
       {
           f=0;
           for(j=1;j<=c;j++)
           {
               if(a[j]<=b[i])
               {
                   f++;
               }
               else if(f==0)
               {
                   l=0;
                   break;
               }
           }
           l*=(f-i+1);
           l%=k;
       }
       printf("Case %lld: %lld\n",cs,l);
   }


   return 0;
}
