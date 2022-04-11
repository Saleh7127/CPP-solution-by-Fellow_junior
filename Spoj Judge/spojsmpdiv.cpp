#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll a,b,c,d,e,f,i,j,k,l;

   test

   {
       cin>>a>>b>>c;
       for(i=b;i<a;i+=b)
       {
           if(i%c!=0)
           {
               cout<<i<<" ";
           }
       }
       cout<<endl;
   }


   return 0;
}
