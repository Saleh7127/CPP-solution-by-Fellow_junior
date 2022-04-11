/***
 created: 2021-11-06-20.29.24
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'

ll a[1005][1005];
ll dp[200][200];
ll n,m;


int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   test
   {
        ll i,j,k,l,h,ans=0;

        cin>>n>>m;

        memset(dp,0,sizeof dp);

        for(i=0;i<n;i++)
        {
             for(j=0;j<m;j++)
             {
                  cin>>a[i][j];
                  dp[i][j]=a[i][j];
             }
        }

        for(i=0;i<n;i++)
        {
             for(j=0;j<m;j++)
             {
                  k=l=h=0;

                  if(i-1>=0 && j-1>=0) k=dp[i-1][j-1];
                  if(i-1>=0) l=dp[i-1][j];
                  if(i-1>=0 && j+1<m) h=dp[i-1][j+1];

                  dp[i][j]+=max({k,l,h});
             }

        }

        for(i=0;i<n;i++)
        {
             for(j=0;j<m;j++)
             {
                 ans=max(ans,dp[i][j]);
             }
        }
        cout<<ans<<nl;
   }

   get_lost_idiot;
}

