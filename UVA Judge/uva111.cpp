/***
 created: 2021-12-07-23.13.21
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'

ll dp[25][25];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n,m,i,j,k,l;

    cin>>n;

    ll a[n+4];
    ll b[n+4];

    for(i=0; i<n; i++)
    {
        cin>>m;
        a[m-1]=i+1;
    }


    while(cin>>m)
    {
        memset(dp,0,sizeof dp);

        b[m-1]=1;

        for(i=1; i<n; i++)
        {
            cin>>m;
            b[m-1]=i+1;
        }


        for(i=1; i<=n; i++)
        {
            for(j=1; j<=n; j++)
            {
                if(a[i-1]==b[j-1])
                {
                    dp[i][j]=1+dp[i-1][j-1];
                }
                else
                {
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }

        cout<<dp[n][n]<<endl;
    }

    get_lost_idiot;
}
