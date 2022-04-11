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


       ll a,b,c=0,d,e,i,j,k,l;
       cin>>a>>b;

       for(i=1;i*i<=a;i++)
       {
           c+=max(min(b,a/i-1)-i,0LL);
       }

       cout<<c<<endl;
   }

   return 0;
}
