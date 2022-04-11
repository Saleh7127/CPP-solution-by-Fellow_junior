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

        ll n,m,i,j,k,l=1e9;

        cin>>n;

        ll dp[100][3]={0};

        ll a[n+2],b[n+2],c[n+2];

        for(i=0; i<n; i++)
        {
            cin>>a[i]>>b[i]>>c[i];
        }

        dp[0][0]=a[0];
        dp[0][1]=b[0];
        dp[0][2]=c[0];

        for(i=1; i<n; i++)
        {
            dp[i][0]=min(dp[i-1][1],dp[i-1][2])+a[i];
            dp[i][1]=min(dp[i-1][0],dp[i-1][2])+b[i];
            dp[i][2]=min(dp[i-1][1],dp[i-1][0])+c[i];
        }


        l=min(dp[n-1][0],min(dp[n-1][1],dp[n-1][2]));

        cout<<"Case "<<cs<<": "<<l<<endl;
    }


    return 0;
}

