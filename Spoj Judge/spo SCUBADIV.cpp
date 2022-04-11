/***
 created: 2021-11-07-21.49.00
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'

ll dp[1005][23][82];

ll n;

ll ns[1005];
ll os[1005];
ll we[1005];

ll solve(ll in,ll ox,ll ni)
{
     if(ox==0 && ni==0) return 0;

     if(in>=n) return INT_MAX;

     if(dp[in][ox][ni]!=-1) return dp[in][ox][ni];

     ll ans=min(solve(in+1,ox,ni),solve(in+1,max(0ll,ox-os[in]),max(0ll,ni-ns[in]))+we[in]);

     return dp[in][ox][ni]=ans;
}

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   test
   {
        ll ox,ni;

        cin>>ox>>ni>>n;

        for(ll i=0;i<n;i++)
        {
             cin>>os[i]>>ns[i]>>we[i];
        }

        memset(dp,-1,sizeof dp);

        cout<<solve(0,ox,ni)<<nl;
   }

   get_lost_idiot;
}
