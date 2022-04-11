#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll a[100005],c,d=0,i;
   cin>>c;
   for(i=0;i<c;i++)
   {
       cin>>a[i];
       d=__gcd(d,a[i]);
   }
   cout<<d<<endl;

   return 0;
}
