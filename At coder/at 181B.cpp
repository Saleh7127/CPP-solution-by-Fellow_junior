#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

  ll a,b,c,d,i=0,j,k,l;
   test
   {

       cin>>a>>b;
       c=(b*(b+1))/2;
       d=(a*(a-1))/2;
       i+=(c-d);

   }
   cout<<i<<endl;
   return 0;
}
