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
       ll a,b,c,d;
       cin>>a>>b>>c;
       d=min(a,min(b,c));

       if((a+b+c)%9==0 && ((a+b+c)/9)<=d) cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
   }


   return 0;
}
