/***
 created: 2021-12-01-20.24.47
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'

ll dp[1005][1005];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string a;
    string b;

    ll s=0;

    while(getline(cin,a))
    {
        if(a=="#") break;

        getline(cin,b);

        ll n,m,i,j,k,l;

        n=a.size();
        m=b.size();

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


        cout<<"Case #"<<++s<<": you can visit at most "<<dp[n][m]<<" cities."<<nl;

    }

    return 0;
}
