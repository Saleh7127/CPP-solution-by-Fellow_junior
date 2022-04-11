/***
 created: 2021-11-14-02.13.41
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'

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

ll f[200005],inf[200005];

void fact()
{
      f[0]=inf[0]=1;
      ll i,l=1e9+7;

      for(i=1;i<=200002;i++)
      {
           f[i]=(f[i-1]*i)%l;
           inf[i]=bigmod(f[i],l-2,l);
      }
}


ll nCr(ll n,ll r)
{
     ll l=1e9+7;

     if(r>n) return 0ll;
     if(r==n) return 1ll;

     return f[n]*inf[n-r]%l*inf[r]%l;
}


int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   fact();

   test
   {
        ll n,m,i,j,k,l=1e9+7,ans=0;

        cin>>n>>m>>k;

        ll a[n+4];

        for(i=0;i<n;i++) cin>>a[i];

        sort(a,a+n);

        for(i=0;i<n;i++)
        {
             j=upper_bound(a,a+n,a[i]+k)-a;

             ans=(ans+nCr(j-(i+1),m-1))%l;
        }

        cout<<ans<<nl;
   }


   get_lost_idiot;
}
