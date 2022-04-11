/***
 created: 2021-11-06-17.41.50
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'
ll dp[5000][5000];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    ll s,n,i,j,k,l;

    cin>>s>>n;

    ll a[n+4],b[n+4];

    for(i=1; i<=n; i++) cin>>a[i]>>b[i];


    for(i=1;i<=n;i++)
    {
         for(j=1;j<=s;j++)
         {
              if(a[i]<=j)
              {
                   dp[i][j]=max(dp[i-1][j],dp[i-1][j-a[i]]+b[i]);
              }
              else
              {
                   dp[i][j]=max(dp[i-1][j],dp[i][j]);
              }
         }
    }


    cout<<dp[n][s]<<nl;

    get_lost_idiot;
}
