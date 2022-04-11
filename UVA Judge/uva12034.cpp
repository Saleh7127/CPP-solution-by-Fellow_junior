#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
ll mod=10056;
ll c[1005][1005],dp[1005];

void pre()
{
    ll i,j,k,l;

    ///nCr
    for(i=0; i<=1002; i++)
    {
        c[i][0]=1;
        for(j=1; j<=i; j++)
        {
            c[i][j]=(c[i][j]+c[i-1][j]+c[i-1][j-1])%mod;
        }
    }

    dp[0]=1;
    dp[1]=1;
    dp[2]=3;
    dp[3]=13;

    ///for all n ans(n) = nCr + ans(n-r);
    ///select r items for 1st then multilply the formation of n-r items

    for(i=4; i<=1002; i++)
    {
        for(j=1; j<=i; j++)
        {
            dp[i]=(dp[i]+c[i][j]*dp[i-j])%mod;
        }
    }

}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    pre();

    test
    {
         ll n;
         cin>>n;
         cout<<"Case "<<cs<<": "<<dp[n]<<endl;
    }


    return 0;
}
