#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll fiv[52],i,j,k,l,a;

   fiv[1]=2;
   fiv[2]=3;
   for(i=3;i<51;i++)
   {
       fiv[i]=fiv[i-1]+fiv[i-2];
   }

   test
   {
       cin>>a;
       cout<<"Scenario #"<<cs<<":"<<endl;
       cout<<fiv[a]<<endl<<endl;
   }


   return 0;
}
