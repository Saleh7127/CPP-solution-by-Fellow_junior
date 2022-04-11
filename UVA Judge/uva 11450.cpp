#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    test
    {

        ll n,m,i,j,k,l=0,c;

        cin>>n>>c;

        ll dp[c+5][n+2];

        memset(dp,0,sizeof dp);

        vector<ll>a[c+5];

        for(i=1; i<=c; i++)
        {
            cin>>j;
            while(j--)
            {
                cin>>k;
                a[i].push_back(k);
            }
        }

        dp[0][0]=1;

        for(i=1;i<=c;i++)
        {
            for(j=n;j>=0;j--)
            {
                for(k=a[i].size()-1;k>=0;k--)
                {
                    if(a[i][k]<=j && dp[i][j]<dp[i-1][j-a[i][k]])
                    {
                        dp[i][j]+=dp[i-1][j-a[i][k]];
                    }
                }
            }
        }

        for(i=0;i<=n;i++)
        {
            if(dp[c][i]>0)
            {
                l=max(l,i);
            }
        }

        if(l) cout<<l<<endl;
        else cout<<"no solution"<<endl;

    }


    return 0;
}
