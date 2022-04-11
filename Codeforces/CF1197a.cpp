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
       ll a[100005],b,c,d,e,f,i,j,k,l;
       cin>>b;
       for(i=0;i<b;i++)
       {
           cin>>a[i];
       }
       sort(a,a+b);
       cout<<min(a[b-2]-1,b-2)<<endl;
   }


   return 0;
}
