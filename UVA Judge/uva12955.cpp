#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    ll f[20],i,j,k,l;

    f[0]=f[1]=1;

    for(i=2; i<=10; i++) f[i]=f[i-1]*i;

    ll dp[100005];

    for(i=0;i<=100002;i++) dp[i]=INT_MAX;

    dp[0]=1;

    for(i=0; i<=10; i++)
    {
        for(j=1; j<=100000; j++)
        {
            if(j>=f[i])
            {
                dp[j]=min(dp[j],dp[j-f[i]]+1);
            }
        }
    }

    ll n;

    while(cin>>n)
    {
        cout<<dp[n]<<endl;
    }

    return 0;
}

