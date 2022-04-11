#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
ll f[25];
ll mod=1e9+7;
ll bigmod(ll a,ll c,ll d)
{
    if(c==0) return 1LL;
    ll x=bigmod(a,c/2,d);
    x=((x%d)*(x%d))%d;
    if(c%2==1LL)
    {
        x=((x%d)*(a%d))%d;
    }
    return x;
}

ll ncr(ll n,ll r)
{
    return (f[n]%mod * bigmod(f[n-r],mod-2,mod)%mod * bigmod(f[r],mod-2,mod)%mod )%mod;
}

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   //freopen("popcorn.in","r",stdin);

   f[0]=1;
   for(ll i=1;i<=20;i++)
   {
       f[i]=f[i-1]*i;
   }

   test
   {
       ll n,r;

       cin>>n>>r;

       cout<<ncr(n,r)<<endl;
   }


   return 0;
}
