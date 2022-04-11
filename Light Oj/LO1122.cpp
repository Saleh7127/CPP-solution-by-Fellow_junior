/***
 created: 2021-10-20-23.48.58
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0

ll dp[15][15];
ll a[20],n,m;

ll solve(ll i,ll digit)
{
    if(i==n) return 1ll;

    if(dp[i][digit]!=-1) return dp[i][digit];

    ll ans=0;


    for(ll j=0; j<m; j++)
    {
        if(i==0 || abs(digit-a[j])<=2)
        {
            ans+=solve(i+1,a[j]);
        }
    }


    dp[i][digit]=ans;

    return dp[i][digit];
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    test
    {

        cin>>m>>n;

        for(ll i=0; i<m; i++) cin>>a[i];

        memset(dp,-1,sizeof dp);

        cout<<"Case "<<cs<<": "<<solve(0,0)<<endl;
    }



    get_lost_idiot;
}
