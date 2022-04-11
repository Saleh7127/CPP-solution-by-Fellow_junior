/***
 created: 2021-11-6-16.46.09
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0

ll dp[1002][1002];
ll a[1005],b[1005];
ll n,m;

ll solve(ll i,ll j)
{
    if(i==n) return m-j;

    if(j==m) return n-i;

    if(dp[i][j]!=-1) return dp[i][j];

    ll ans=1e6;

    if(a[i]==b[j])
    {
        ans=min(ans,solve(i+1,j+1));
    }

    else
    {
        ans=min(ans,1+solve(i+1,j+1)); ///change i or j th char
        ans=min(ans,1+solve(i+1,j));  ///dlt i th char
        ans=min(ans,1+solve(i,j+1));  ///insrt j th char
    }

    return dp[i][j]=ans;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    memset(dp,-1,sizeof dp);

    cin>>n>>m;

    for(ll i=0; i<n; i++) cin>>a[i];

    for(ll i=0; i<m; i++) cin>>b[i];

    cout<<solve(0,0)<<endl;

    get_lost_idiot;
}

