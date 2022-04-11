#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll dp[1000];
    ll a,b,i,j,k,l;
    dp[0]=0;
    dp[1]=1;
    dp[2]=2;
    dp[3]=2;
    for(i=4; i<=76; i++)
    {
        dp[i]=dp[i-2]+dp[i-3];
    }
    while(cin>>a)
    {
        cout<<dp[a]<<endl;
    }

    return 0;
}
