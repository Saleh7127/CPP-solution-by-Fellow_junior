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

       ll a[1000]={0},b,c,d,e=0,i,j,k,l;
       cin>>b;
       for(i=0;i<b;i++)
       {
           cin>>c;
           a[c]++;
       }
       for(i=0;i<=100;i++)
       {
           e=max(e,a[i]);
       }
       cout<<e<<endl;
   }


   return 0;
}
