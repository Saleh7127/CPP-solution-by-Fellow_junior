#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
ll dp[30005];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll coin[]= {1, 5, 10, 25, 50};

    dp[0]=1;
    for(ll i=0; i<5; i++)
    {
        for(ll j=coin[i]; j<=30000; j++)
        {
            dp[j]+=dp[j-coin[i]];
        }
    }
    ll n;

    while(scanf("%lld",&n)==1)
    {
        if(n==0) cout<<0<<endl;
        else cout<<dp[n]<<endl;

    }

    return 0;
}
