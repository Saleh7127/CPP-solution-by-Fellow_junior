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

       ll a,b,c,d,i,j,k;
       cin>>a>>b;

       set<ll>xx;
       xx.insert(a);
       xx.insert(b);

       while(1)
       {
           c=abs(a-b);
           xx.insert(c);

           if(c==0) break;

           a=b;
           b=c;
       }
       cout<<"Case #"<<cs<<": ";
       cout<<xx.size()<<endl;
   }

   return 0;
}
