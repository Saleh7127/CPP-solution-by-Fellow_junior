#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
ll nZero(ll x)
{
    return x/5;
}
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);


   ll l,r;
   while(cin>>l>>r && l && r)
   {
       cout<<1+nZero(r)-nZero(l)<<endl;
   }

   return 0;
}
