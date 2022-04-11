#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
ll a[20000],c[20000],d,e,f=0,i,j,k,x,y;
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   test
   {
       cin>>x>>y;
       d=x+y;
       e=x-y+1000;
       a[d]++;
       c[e]++;
   }
   for(i=0;i<3005;i++)
   {
       f+=(a[i]*(a[i]-1))/2;
       f+=(c[i]*(c[i]-1))/2;
   }
   cout<<f<<endl;
   return 0;
}
