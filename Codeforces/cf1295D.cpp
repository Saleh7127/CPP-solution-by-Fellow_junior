#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
ll phi(ll n)
{
    ll r=n;
    for(ll i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            while(n%i==0)
            {
                n=n/i;
            }
            r=r-r/i;
        }
    }
    if(n>1) r=r-r/n;
    return r;
}

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);


   test
   {
       ll n,m,i,j,k,l;

       cin>>n>>m;
       cout<<phi(m/__gcd(n,m))<<endl;
   }

   return 0;
}
