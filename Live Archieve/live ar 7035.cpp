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
       ll a,b,c,d,e=0,i,j,k,l;
       cin>>a;
       for(i=0;i<a;i++)
       {
           cin>>b;
           if(b%3!=0)
           {
               e=1;
           }
       }
       if(e) cout<<"Case #"<<cs<<": No"<<endl;
       else cout<<"Case #"<<cs<<": Yes"<<endl;
   }


   return 0;
}
