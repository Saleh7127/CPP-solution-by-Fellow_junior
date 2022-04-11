/***
 created: 2021-12-02-01.34.03
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'

ll dp[105][105];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n,m,cc=0;

    while(cin>>n>>m && (n+m))
    {
        ll a[n+4],i,j;
        ll b[m+4];


        for(i=0;i<n;i++) cin>>a[i];
        for(i=0;i<m;i++) cin>>b[i];

        memset(dp,0,sizeof dp);

        for(i=1; i<=n; i++)
        {
            for(j=1; j<=m; j++)
            {
                if(a[i-1]==b[j-1])
                {
                    dp[i][j]=dp[i-1][j-1]+1;
                }
                else
                {
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }

        cout<<"Twin Towers #"<<++cc<<nl;
        cout<<"Number of Tiles : "<<dp[n][m]<<nl<<nl;


    }



    get_lost_idiot;
}
