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
       ll a,c,d,e,f,i,j,k,l;
       cin>>a;
       c=a;
       d=a-1;
       cout<<2<<endl;

       for(i=0;i<a-1;i++)
       {
           cout<<d<<" "<<c<<endl;
           c=(c+d+1)/2;
           d=d-1;
       }
   }


   return 0;
}
