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
       ll a[5],b,c,d,e,f,i,j,k,l;
       for(i=0;i<4;i++)
       {
           cin>>a[i];
       }
       sort(a,a+4);

       cout<<a[0]*a[2]<<endl;

   }


   return 0;
}
