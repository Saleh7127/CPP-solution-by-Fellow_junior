#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);
   ///!@]}

   test
   {

       ll x,y,n,k,a,c,d,e,f,i,j,l;

       cin>>x>>y>>k;

       n=(y*k)+k-1;

       d=k;
       if((n)%(x-1)==0) e=(n)/(x-1);
       else e=1+(n)/(x-1);
       cout<<d+e<<endl;

   }


   return 0;
}
