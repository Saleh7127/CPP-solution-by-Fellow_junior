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
       ll a,b,c,d,e,i,j,k,l;
       cin>>a>>b>>c;
       d=1;
       while(a%2==0)
       {
           a/=2;
           d*=2;
       }
       while(b%2==0)
       {
           b/=2;
           d*=2;
       }
       if(d>=c) cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
    }


   return 0;
}
