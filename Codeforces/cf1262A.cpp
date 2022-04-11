///CF 1262A
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
       int a,c,d,e=0,f=1e11,i,j;
       cin>>a;
       while(a--)
       {
           cin>>c>>d;
           e=max(e,c);
           f=min(f,d);
       }
       cout<<max(0,(e-f))<<endl;
   }



   return 0;
}
