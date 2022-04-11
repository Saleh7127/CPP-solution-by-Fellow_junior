/***
 created: 2022-02-01-16.36.22
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'

const ll mod=998244353;

ll dp[1001][13][13][13];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    ll n,m,i,j,k,l;

    cin>>n>>m;

    dp[0][m+1][m+1][m+1]=1;


    for(i=0; i<n; i++)
    {
        for(ll j=1; j<=m+1; j++)
        {
            for(k=1; k<=m+1; k++)
            {
                for(l=1; l<=m+1; l++)
                {
                    for(ll x=1; x<=m; x++)
                    {
                        if(x<=j)
                        {
                            dp[i+1][x][k][l]+=dp[i][j][k][l];
                            dp[i+1][x][k][l]%=mod;
                        }
                        else if(x<=k)
                        {
                            dp[i+1][j][x][l]+=dp[i][j][k][l];
                            dp[i+1][j][x][l]%=mod;
                        }
                        else if(x<=l)
                        {
                            dp[i+1][j][k][x]+=dp[i][j][k][l];
                            dp[i+1][j][k][x]%=mod;
                        }
                    }
                }
            }
        }
    }

    ll ans=0;


    for(ll j=1; j<=m; j++)
    {
        for(k=1; k<=m; k++)
        {
            for(l=1; l<=m; l++)
            {
                ans+=dp[n][j][k][l];
                ans%=mod;
            }
        }
    }

    cout<<ans<<nl;


    get_lost_idiot;
}
