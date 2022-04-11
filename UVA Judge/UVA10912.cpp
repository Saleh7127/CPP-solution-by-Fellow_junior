/***
 created: 2022-03-16-05.23.18
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'

ll sum,n;

ll dp[29][160][460];

ll solve(ll in,char c,ll s)
{
    if(in==n) return s==sum;

    if(s>sum) return 0;

    if(dp[in][c][s]!=-1) return dp[in][c][s];

    ll ans=0;

    for(char cc=c+1;cc<='z';cc++)
    {
        ans+=solve(in+1,cc,s+(cc-'a')+1);
    }

    return dp[in][c][s]=ans;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll tc=1;

    while(cin>>n>>sum && (sum+n))
    {
        cout<<"Case "<<tc++<<": ";

        ll x=(n*(n+1))/2;

        if(n>26 || sum>351 || x>sum) cout<<0<<nl;
        else
        {
            memset(dp,-1,sizeof dp);

            cout<<solve(0,96,0)<<nl;
        }
    }

    get_lost_idiot;
}

