/***
 created: 2021-11-09-23.00.31
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'

ll n,s,dp[70][70][2];

ll solve(ll in,ll d,ll sec)
{
     if(in==n)
     {
          if(d==s) return 1;
          return 0;
     }
     if(dp[in][d][sec]!=-1) return dp[in][d][sec];

     ll ans=solve(in+1,d+sec,1)+solve(in+1,d,0);

     return dp[in][d][sec]=ans;
}


ll solve1(ll in,ll d,ll sec)
{

     if(in==0)
     {
          return d==0;
     }
     if(dp[in][d][sec]!=-1) return dp[in][d][sec];

     ll ans=0ll;

     if(sec==1)
     {
          ans=solve1(in-1,d-1,1)+solve1(in-1,d,0);
     }
     else ans=solve1(in-1,d,1)+solve1(in-1,d,0);

     return dp[in][d][sec]=ans;
}


int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);


   while(cin>>n>>s)
   {
        if(n<0 || s<0) exit(0);

        memset(dp,-1,sizeof dp);

       //cout<<solve(0,0,1)<<nl; also AC

        cout<<solve1(n,s,1)<<nl;
   }


   get_lost_idiot;
}
