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
       ll a;
       cin>>a;
       while(a%2==0)
       {
           a/=2;
       }
       if(a%2==1 && a>1) cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
   }


   return 0;
}
