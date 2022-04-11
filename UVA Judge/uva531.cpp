/***
 created: 2021-12-01-19.06.08
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'
ll dp[205][205];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string a[1000];
    string b[1000];

    ll n,m,i,j,k,l;


    while(cin>>a[0])
    {
        n=m=0;

        while(a[n]!="#")
        {
            cin>>a[++n];
        }

        cin>>b[0];

        while(b[m]!="#")
        {
            cin>>b[++m];
        }

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

        string ans[200];

        l=0;

        while(dp[n][m])
        {
            if(a[n-1]==b[m-1])
            {
                 ans[l]=a[n-1];
                 l++;
                 n--,m--;
            }
            else if(dp[n-1][m]>dp[n][m-1])
            {
                 n--;
            }
            else m--;
        }

        for(i=l-1;i>=0;i--)
        {
             if(i==l-1) cout<<ans[i];
             else cout<<" "<<ans[i];
        }
        cout<<nl;
    }

    return 0;
}

