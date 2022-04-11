#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll n,m,x;

   cin>>n;

   set<ll>y;
   m=n;

   while(n--)
   {
        cin>>x;
        y.insert(x);
   }

   cout<<m-y.size()<<endl;

   return 0;
}
