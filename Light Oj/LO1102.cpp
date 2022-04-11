#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
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

ll f[2000005];
ll invf[2000005];

void fact()
{
     ll i,j,k;

     f[0]=1;
     for(i=1;i<=2000001;i++)
     {
          f[i]=(f[i-1]*i)%mod;
          ///invf[i]=bigmod(f[i],mod-2,mod);
          ///using inverse modulo for every number will give tle
     }
}

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   fact();


   test
   {
        ll n,m,i,j,k,l,ans;

        cin>>n>>k;

        ///stars and bars for 4 && 3;
        ///4 stars 3 bars;
        ///total will be 3-1 bars make 3 part
        /// so n+k-1 C k-1

        ///ans=(f[n+k-1])%mod * invf[n]%mod * invf[k-1]%mod;

        ans=f[n+k-1];

        l=(f[n]*f[k-1])%mod;

        l=bigmod(l,mod-2,mod);

        ans=(ans*l)%mod;

        cout<<"Case "<<cs<<": "<<ans<<'\n';
   }

   return 0;
}
