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
       ll a,b,c,d,e;
       cin>>a>>b;
       if(b%a==0) cout<<b/a<<endl;
       else if(a>b)
       {
           if(a%b==0) cout<<1<<endl;
           else cout<<2<<endl;
       }
       else
       {
           cout<<1+b/a<<endl;
       }
   }


   return 0;
}
