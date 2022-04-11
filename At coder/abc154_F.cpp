/***
 created: 2022-01-16-18.51.36
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'

ll f[2000005];
ll inv[2000005];
ll mod=1e9+7;

ll bigmod(ll a,ll c,ll d)
{
    if(c==0) return 1LL;
    ll x=bigmod(a,c/2,d);
    x=(x*x)%d;
    if(c%2==1LL)
    {
        x=(x*a)%d;
    }
    return x;
}

void fact()
{
     f[0]=inv[0]=1;

     for(ll i=1;i<=2000002;i++)
     {
          f[i]=(f[i-1]*i)%mod;
          inv[i]=(inv[i-1]*bigmod(i,mod-2,mod))%mod;
     }
}

ll nCr(ll n,ll r)
{
     if(n<=0 || r<=0) return 0;

     ll x=(((f[n+r]*inv[n])%mod)*inv[r])%mod;

     x+=mod;

     return x%mod;
}

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);


   fact();

   ll r1,r2,c1,c2;

   cin>>r1>>c1>>r2>>c2;

   ll ans;

   r1++,r2++,c1++,c2++;

   ans=nCr(r2,c2)+nCr(r1-1,c1-1)-nCr(r1-1,c2)-nCr(r2,c1-1);

   ans%=mod;
   ans+=mod;
   cout<<ans%mod<<nl;


   get_lost_idiot;
}
