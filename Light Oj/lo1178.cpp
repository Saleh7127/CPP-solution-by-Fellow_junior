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

       double a,b,c,d,e,f,s;

       cin>>a>>b>>c>>d;

       s=(a+b+c+d)/2.00;

       e=(a+c)/abs(a-c);

       f=sqrt((s-a)*(s-c)*(s-a-b)*(s-a-d));

       e*=f;

       cout<<"Case "<<cs<<": "<<fixed<<setprecision(8)<<e<<endl;

   }


   return 0;
}
