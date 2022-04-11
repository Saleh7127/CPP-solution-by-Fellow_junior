/***
 created: 2022-01-09-15.13.06
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'

ll n;
ll dp[505][505];
ll a[500];

ll solve(ll in,ll tm)
{
     if(in>=n) return 0;
     if(tm>(2*n)) return INT_MAX;
     if(dp[in][tm]!=-1) return dp[in][tm];

     ll ans=INT_MAX;

     for(ll i=tm;i<=2*n;i++)
     {
          ans=min(ans,abs(i-a[in])+solve(in+1,i+1));
     }

     return dp[in][tm]=ans;

}

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   test
   {
        cin>>n;


        for(ll i=0;i<n;i++) cin>>a[i];

        sort(a,a+n);

        memset(dp,-1,sizeof dp);

        cout<<solve(0,1)<<nl;
   }

   get_lost_idiot;
}
