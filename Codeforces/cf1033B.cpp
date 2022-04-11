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

       ll a,b,c,d,e,f,i,j,k=0,l;
       cin>>a>>b;
       if(a-b>1) cout<<"NO"<<endl;
       else
       {
           a+=b;
           for(i=2;i*i<=a;i++)
           {
               if(a%i==0)
               {
                   k=1;
                   cout<<"NO"<<endl;
                   break;
               }
           }
           if(k==0) cout<<"YES"<<endl;
       }

   }


   return 0;
}
