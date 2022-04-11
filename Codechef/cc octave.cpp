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
       ll a[10]={0},c,d,e=1e8,f,i,j,k,l;
       cin>>c;
       while(c--)
       {
           cin>>d;
           a[d]++;

       }
       for(i=1;i<=8;i++)
       {
           e=min(e,a[i]);
       }
       cout<<e<<endl;
   }

   return 0;
}
