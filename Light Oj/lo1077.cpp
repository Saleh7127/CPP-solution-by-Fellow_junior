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

       ll x1,x2,y1,y2,a,b,c;
       cin>>x1>>y1>>x2>>y2;

       a=abs(x1-x2);
       b=abs(y1-y2);
       c=__gcd(a,b)+1;

       cout<<"Case "<<cs<<": "<<c<<endl;


   }


   return 0;
}
