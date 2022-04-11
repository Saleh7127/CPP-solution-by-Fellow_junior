/***
 created: 2022-03-08-15.59.43
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'
const ll mod= 1000000007;

ll bigmod(ll a,ll c,ll d)
{

   ll ans=1;
   a%=d;
   while(c>0)
   {
       if(c&1)
       {
           ans=(ans*a)%d;
       }
       c=c>>1;

       a=(a*a)%d;
   }

   return ans;

}

/// bigmod(2,mod-2,mod) = 500000004;

ll sum(ll n)
{
    return ((((n%mod)*((n+1)%mod))%mod)*500000004)%mod;
}

ll divsum1ton(ll n)
{
    ll i,j,k,l=1,r;


    ll ans=0;

    while(l<=n)
    {
        k=n/l;
        r=n/k;

        k%=mod;

        ans+=((sum(r)-sum(l-1)%mod)*k)%mod;

        ans%=mod;

        l=r+1;
    }

    ans%=mod;

    if(ans<0) ans+=mod;

    return ans;
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n;

    cin>>n;

    cout<<divsum1ton(n)<<nl;

    get_lost_idiot;
}

