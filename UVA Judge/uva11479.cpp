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
       ll a,b,c;

       cin>>a>>b>>c;

       cout<<"Case "<<cs<<": ";

       if(a+b<=c ||b+c<=a || c+a<=b)
       {
           cout<<"Invalid"<<endl;
       }
       else if(a==b && b==c && c==a)
       {
           cout<<"Equilateral"<<endl;
       }

       else if(a==b ||  b==c ||  c==a)
       {
           cout<<"Isosceles"<<endl;
       }
       else if(a!=b && b!=c && c!=a)
       {
           cout<<"Scalene"<<endl;
       }
   }

   return 0;
}

