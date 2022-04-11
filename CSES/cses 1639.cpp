/***
 created: 2022-04-11-23.54.11
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'

string a;
string b;

ll dp[5005][5005],n,m;

ll solve(ll i,ll j)
{
    if(dp[i][j]!=-1) return dp[i][j];

    if(i==n && j==m) return 0;
    else if(i==n) return m-j;
    else if(j==m) return n-i;

    ll ans;

    ans=min(1+solve(i+1,j),1+solve(i,j+1));

    if((a[i]!=b[j])) ans=min(ans,1+solve(i+1,j+1));
    else ans=min(ans,solve(i+1,j+1));

    return dp[i][j]=ans;

}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>a>>b;

    n=a.size();
    m=b.size();

    memset(dp,-1,sizeof dp);

    cout<<solve(0,0)<<nl;

    get_lost_idiot;
}

