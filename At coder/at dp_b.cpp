#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
ll dp[200005];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n,m,i,j,k,l;

    for(i=0; i<=200005; i++)
    {
        dp[i]=INT_MAX;
    }

    cin>>n>>k;

    ll a[n+4];

    for(i=1; i<=n; i++)
    {
        cin>>a[i];
    }

    dp[1]=0;

    for(i=2; i<=n; i++)
    {
        l=INT_MAX;

        if(i-k<0) j=0;

        else j=i-k;

        while(i>j)
        {
            l=min(l,dp[j]+abs(a[i]-a[j]));
            j++;
        }
        dp[i]=min(l,dp[i]);
    }

    cout<<dp[n]<<endl;

    return 0;
}

