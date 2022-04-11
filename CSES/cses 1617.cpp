#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)

ll mod(ll a,ll c,ll m)
{
    if(c==0) return 1;
    ll x=mod(a,c/2,m);
    x=(x*x)%m;
    if(c%2)
    {
        x=(x*a)%m;
    }
    return x;
}

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll a,c,d;
   cin>>a;

   c=mod(2,a,1000000007);
   cout<<c<<endl;


   return 0;
}
