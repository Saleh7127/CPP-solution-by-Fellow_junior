
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

       ll a,b,c;
       cin>>a;
       if(a<2020)
       {
           cout<<"NO"<<endl;
           continue;
       }
       if(a%2020==0 || a%2021==0)
       {
           cout<<"YES"<<endl;
           continue;
       }
       while(a>0)
       {
           if(a%2021==0)
           {
              a-=2021;
           }
           else a-=2020;
       }
       if(a==0) cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
   }


   return 0;
}
