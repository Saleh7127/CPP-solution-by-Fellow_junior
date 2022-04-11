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

       ll a,c,d,e,f,i,j,k;
       cin>>a;
       c=sqrt(a);
       d=c-1;
       if(c*c==a)
       {
           d+=c-1;
       }
       else
       {
           d+=(a/c);
           if(a%c==0) d--;
       }
       cout<<d<<endl;
   }



   return 0;
}
