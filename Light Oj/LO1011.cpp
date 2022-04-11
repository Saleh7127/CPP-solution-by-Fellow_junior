/***
 created: 2022-01-23-16.31.44
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

ll n,dp[17][1ll<<16];
ll a[17][17];

ll solve(ll in,ll mask)
{
     if(mask==(1<<n)-1) return 0;

     if(dp[in][mask]!=-1) return dp[in][mask];

     ll ans=0;

     for(ll i=0;i<n;i++)
     {
          if(check(mask,i)==0)
          {
               ans=max(ans,a[in][i]+solve(in+1,Set(mask,i)));
          }
     }

     return dp[in][mask]=ans;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    test
    {

         cin>>n;

         for(int i=0;i<n;i++)
         {
              for(int j=0;j<n;j++)
              {
                   cin>>a[i][j];
              }
         }

         cout<<"Case "<<cs<<": ";

         memset(dp,-1,sizeof dp);

         cout<<solve(0,0)<<nl;
    }


    get_lost_idiot;
}
