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
       ll n,v,i,j,a,ans=0,s=1,k;
       cin>>n>>v;
       while(v--)
       {
           cin>>k;
           s=1;
           while(k--)
           {
               cin>>a;
               s*=a;
               s%=n;
           }
           ans+=s;
       }
       cout<<ans%n<<endl;
   }
   return 0;
}
