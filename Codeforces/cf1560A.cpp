#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);


   vector<ll>x;

   for(ll i=1;i<=1666;i++)
   {
        if(i%3!=0 && i%10!=3)
        {
             x.push_back(i);
        }

   }

   test
   {
        ll n;
        cin>>n;
        cout<<x[n-1]<<endl;
   }

   return 0;
}
