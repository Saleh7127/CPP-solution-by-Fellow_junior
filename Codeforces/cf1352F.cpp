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
       ll a,b,c,i,j,k,l;
       cin>>a>>b>>c;
       string x="";

       if(b)
       {
           x+='1';
           for(i=1;i<=c;i++) x+='1';
           x+='0';
           b--;
           for(i=1;i<=a;i++) x+='0';
           for(i=1;i<=b;i++)
           {
               if(i%2) x+='1';
               else x+='0';
           }
       }
       else
       {
           if(a) for(i=0;i<=a;i++) x+='0';
           if(c) for(i=0;i<=c;i++) x+='1';
       }

       cout<<x<<endl;
   }

   return 0;
}
