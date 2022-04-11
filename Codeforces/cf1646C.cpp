/***
 created: 2022-03-05-23.33.51
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'

ll f[122];
map<ll,ll>dp;
bool v[1211];

ll solve(ll n)
{
    if(dp[n]) return dp[n];

    if(n==0) return 0ll;

    ll ans=0;

    for(ll i=0;i<=40;i++)
    {
        if(n & (1ll<<i)) ans++;
    }

    for(ll i=0;i<=17;i++)
    {
        if(v[i]==0 && f[i]<=n)
        {
            v[i]=1;
            ans=min(ans,1+solve(n-f[i]));
            v[i]=0;
        }
    }

    return dp[n]=ans;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    f[0]=1;
    for(ll i=1;i<=17;i++)
    {
        f[i]=f[i-1]*i;
    }

    test
    {
        ll n;

        cin>>n;
        memset(v,0,sizeof v);
        dp.clear();

        cout<<solve(n)<<nl;
    }

    get_lost_idiot;
}
