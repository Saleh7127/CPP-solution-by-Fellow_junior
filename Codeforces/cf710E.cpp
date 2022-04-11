/***
 created: 2022-03-29-23.09.23
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'

ll dp[10000005],n,x,y;


ll solve(ll in)
{
    if(in==0) return 0;
    if(in==1) return x;

    if(in>n+1) return INT_MAX;

    if(dp[in]!=-1) return dp[in];

    ll ans;

    if(in%2)
    {
        ans=min(x+solve(in-1),x+solve(in+1));
    }
    else ans=min(x*in,y+solve(in/2));

    return dp[in]=ans;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>n>>x>>y;


    memset(dp,-1,sizeof dp);

    cout<<solve(n)<<nl;

    get_lost_idiot;
}
