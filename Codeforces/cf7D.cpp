/***
 created: 2022-03-03-21.14.08
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'

const ll mod=1000007707;
ll base=149;
ll hash1[5000007];
ll hash2[5000007];
ll p1[5000007];

void pwr()
{
    p1[0]=1;
    for(ll i=1; i<=5000005; i++)
    {
        p1[i]=(p1[i-1]*base)%mod;
    }
}

void hashingg(string a,string b)
{
    ///for string a

    hash1[0]=hash2[0]=0;

    for(ll i=1,j=a.size(); i<=a.size(); i++,j--)
    {
        hash1[i]=(hash1[i-1]*base + a[i-1])%mod;
        hash2[j]=(hash2[j+1]*base + b[j-1])%mod;
    }
}

ll forwardhash(ll l,ll r)
{
    ll x=(hash1[r] - hash1[l-1]*p1[r-l+1])%mod;

    if(x<0) x+=mod;

    return x;
}

ll backwardhash(ll l,ll r)
{
    ll x=(hash2[l] - hash2[r+1]*p1[r-l+1])%mod;

    if(x<0) x+=mod;

    return x;
}

ll dp[5000005];

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   pwr();

   string a,b;

   ll n,m,i,j,k,l=0;

   cin>>a;

   b=a;

   hashingg(a,b);

   n=a.size();

   for(i=1;i<=n;i++)
   {
       j=forwardhash(1,i);
       k=backwardhash(1,i);

       if(j==k)
       {
           dp[i]=dp[i/2]+1;
       }

       l+=dp[i];
   }

   cout<<l<<nl;

   get_lost_idiot;
}

