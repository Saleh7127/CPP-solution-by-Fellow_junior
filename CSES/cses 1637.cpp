#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
ll dp[1000005];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    ll n,m,i,j,k,l,d;

    cin>>n;

    for(i=1; i<=n; i++)
    {
        dp[i]=1e13;
        l=i;

        while(l>0)
        {
            d=l%10;
            dp[i]=min(dp[i],dp[i-d]+1);
            l/=10;
        }
    }

    cout<<dp[n]<<endl;

    return 0;
}
