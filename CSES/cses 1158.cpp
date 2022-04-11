/***
 created: 2021-10-28-20.46.09
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'

int main()
{

   int n,i,j,x;

   cin>>n>>x;


   vector<vector<int>> dp(n+2,vector<int>(x+2));

   int price[n+2];
   int page[n+2];

   for(i=0;i<n;i++) cin>>price[i];
   for(i=0;i<n;i++) cin>>page[i];

   for(i=0;i<=n;i++)
   {
        for(j=0;j<=x;j++)
        {
             if(i==0)
             {
                  dp[i][j]=0;
                  continue;
             }

             dp[i][j]=dp[i-1][j];
             if(j>=price[i-1])
             {
                  dp[i][j]=max(dp[i][j],dp[i-1][j-price[i-1]]+page[i-1]);
             }
        }
   }

   cout<<dp[n][x]<<endl;

   get_lost_idiot;
}
