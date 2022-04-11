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
       ll a,i,j=0;
       cin>>a;

       for(i=2;i*i<=a;i++)
       {
           if(a%i==0)
           {
               j=1;
               break;
           }
       }
       if(j) cout<<"NO"<<endl;
       else cout<<"YES"<<endl;
   }


   return 0;
}
