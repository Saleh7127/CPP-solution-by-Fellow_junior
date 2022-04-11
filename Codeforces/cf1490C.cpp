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
       ll a,b,c,d,e,i,f,l=0;
       cin>>a;


       c=cbrt(a);

       for(i=1;i<=c+2;i++)
       {
           b=i*i*i;
           d=a-b;

           if(d<=0) break;

           e=cbrt(d);
           if(e*e*e==d)
           {
               cout<<"YES"<<endl;
               l=1;
               break;
           }
       }
       if(l==0) cout<<"NO"<<endl;
   }


   return 0;
}
