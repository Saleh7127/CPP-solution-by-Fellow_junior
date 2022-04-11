#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
ll mod=1e9+7;
ll lcm(ll a,ll b)
{
     return (a*b)/__gcd(a,b);
}

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   test
   {
        ll n,m,i,j,k,l=0;

        cin>>n;

        for(i=1,m=1;m<=n;m=lcm(i,m),i++)
        {
           l=(l+n/m)%mod;
        }

        cout<<l<<endl;
   }

   return 0;
}
