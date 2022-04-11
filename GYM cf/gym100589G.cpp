/***
 created: 2022-01-26-19.24.00
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'
ll Set(ll N,ll pos){return N=N |(1<<pos);}
ll reset(ll N,ll pos){return N= N & ~(1<<pos);}
bool check(ll N,ll pos){return (bool)(N & (1<<pos));}
ll dp[(1<<15)+2][16];
ll n,k;

ll solve(ll mask,ll l)
{
     if(mask==(1<<n)-1) return 1;

     if(dp[mask][l]!=-1) return dp[mask][l];

     ll ans=0;

     for(ll i=0;i<n;i++)
     {
          if(check(mask,i)==0)
          {
               if(abs(i-l)<=k)
               {
                    ans+=solve(Set(mask,i),i);
               }
          }
     }

     return dp[mask][l]=ans;
}

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   test
   {
        cin>>n>>k;

        memset(dp,-1,sizeof dp);

        ll ans=0;

        for(ll i=0;i<n;i++)
        {
             ans+=solve(1<<i,i);
        }

        cout<<ans<<nl;
   }


   get_lost_idiot;
}

