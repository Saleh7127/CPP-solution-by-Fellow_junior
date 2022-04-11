#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);


   test
   {
        ll n;

        cin>>n;

        if(n<=6) cout<<15<<endl;
        else
        {
             ll x=5*((n+1)/2);
             cout<<x<<endl;
        }
   }

   return 0;
}
