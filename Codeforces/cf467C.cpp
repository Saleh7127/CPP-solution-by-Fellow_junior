/***
 created: 2022-01-09-14.31.18
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'

ll a[5052];
ll sum[5050];
ll dp[5005][5005];
ll n,m,k;

ll solve(ll in,ll tk)
{
     if(tk==k || in>n) return 0ll;

     if(dp[in][tk]!=-1) return dp[in][tk];

     ll ans=INT_MIN;

     if(in+m-1<=n)
     {
          ans=max({ans,(solve(in+m,tk+1)+sum[in+m-1]-sum[in-1]),solve(in+1,tk)});
     }
     else ans=max(ans,solve(in+1,tk));

     return dp[in][tk]=ans;
}

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);


   cin>>n>>m>>k;


   for(ll i=1;i<=n;i++)
   {
        cin>>a[i];
        sum[i]=sum[i-1]+a[i];
   }

   memset(dp,-1,sizeof dp);

   cout<<solve(1,0)<<nl;


   get_lost_idiot;
}
