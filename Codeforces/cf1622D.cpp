/***
 created: 2022-01-20-14.00.52
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'

ll f[5005];
ll mod=998244353;

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
     f[0]=1;
     for(ll i=1;i<=5002;i++)
     {
          f[i]=(f[i-1]*i)%mod;
     }
}

ll nCr(ll n,ll r)
{
     if(n<0 || n<r || r<0) return 0;

     ll x=f[n];

     ll y=bigmod((f[n-r]*f[r])%mod,mod-2,mod);

     x=x*y;

     return x%mod;
}

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   fact();

   ll n,m,i,j,k,l,ans;

   cin>>n>>k;

   ll a[n+4]={0};

   for(i=1;i<=n;i++)
   {
        char c;
        cin>>c;
        a[i]=c-'0';
   }

   m=0;
   j=0,l=1;

   for(i=1;i<=n;i++)
   {
        m+=a[i];
        if(m>k) break;
        l=i;
   }

   if(k==0 || m<k)
   {
        cout<<1<<nl,exit(0);
   }

   ans=nCr(l-j,k);

   for(i=l+1;i<=n;i++)
   {
        if(a[i]==0)
        {
             ans+=nCr(i-j-1,k-1);
             ans%=mod;
        }
        else
        {
             j++;
             while(a[j]==0) j++;
             ans+=nCr(i-j-1,k);
             ans%=mod;
        }
   }

   cout<<ans%mod<<nl;

   get_lost_idiot;
}
