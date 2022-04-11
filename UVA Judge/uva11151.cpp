/***
 created: 2021-11-25-18.49.34
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define get_lost_idiot return 0
#define nl '\n'

string a;

ll dp[1005][1005];

ll solve(ll i,ll j)
{
    if(i>j) return 0;

    if(i==j) return 1;

    if(dp[i][j]!=-1) return dp[i][j];

    ll ans=0;

    if(a[i]==a[j])
    {
        ans=2+solve(i+1,j-1);
    }
    else
    {
        ans=max(solve(i+1,j),solve(i,j-1));
    }

    return dp[i][j]=ans;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    int tt;
    cin>>tt;

    cin.ignore();
    for(int cs=1; cs<=tt; cs++)
    {
        getline(cin,a);

        memset(dp,-1,sizeof dp);

        cout<<solve(0,a.size()-1)<<nl;
    }


    get_lost_idiot;
}
