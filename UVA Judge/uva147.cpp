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

    ll coin[]= {5,10,20,50,100,200,500,1000,2000,5000,10000};

    dp[0]=1;
    for(ll i=0; i<11; i++)
    {
        for(ll j=coin[i]; j<=30000; j++)
        {
            dp[j]+=dp[j-coin[i]];
        }
    }

    double n;

    while(scanf("%lf",&n)==1)
    {
        if(n==0) return 0;
        ll x =int(round(n*100));
        printf("%6.2lf%17lld\n",n,dp[x]);

    }

    return 0;
}

/*
while(~scanf("%lf", &n)) {
        if(n - 0.00 < eps) break;
        ll x = (n * 100 +0.5);
        printf("%6.2f%17lld\n", x * 1.0 / 100, dp[x]);

    }
 */


