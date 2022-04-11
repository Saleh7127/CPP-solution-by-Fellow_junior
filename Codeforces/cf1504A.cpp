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


       string a,b,c,d;

       ll n,m,i,j,k,l;

       cin>>a;

       b="a"+a;
       c=b;
       reverse(c.begin(),c.end());

       if(c!=b)
       {
           cout<<"YES"<<endl;
           cout<<b<<endl;
           continue;
       }
       b.clear(),c.clear();

       b=a+"a";
       c=b;
       reverse(c.begin(),c.end());

       if(c!=b)
       {
           cout<<"YES"<<endl;
           cout<<b<<endl;
           continue;
       }
       cout<<"NO"<<endl;
   }


   return 0;
}
