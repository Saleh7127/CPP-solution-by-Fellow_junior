#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll a,c,d,e;
   while(cin>>a>>c)
   {
       if(__gcd(a,c)==1)
       {
           cout<<"YES"<<endl;
       }
       else cout<<"NO"<<endl;
   }

   return 0;
}
