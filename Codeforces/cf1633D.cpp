/***
 created: 2022-01-31-21.24.09
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'
ll dp[1005][30085];
bool v[1005];
ll b[1005],a[1005],c[1005],n;

ll solve(ll in,ll k)
{
    if(in==n) return 0;

    if(dp[in][k]!=-1) return dp[in][k];

    dp[in][k]=solve(in+1,k);

    if(a[in]<=k) dp[in][k]=max(dp[in][k],c[in]+solve(in+1,k-a[in]));

    return dp[in][k];
}

void pre()
{
    ll i,j,k;
    b[1] = 0;
    for(i=2;i<=1000;i++) b[i] = 1000000;

    for(i=1;i<=1000;i++)
    {
        for(j=1;j<=i;j++)
        {
            k = i + i/j;
            b[k] = min(b[k], 1 + b[i]);
        }
    }

    return ;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    pre();

    test
    {
        ll m,i,j,k,l=0,v=0;

        cin>>n>>k;

        //for(i=1;i<=1000;i++) v+=b[i];
        //cout<<v<<nl;


        for(i=0; i<n; i++)
        {
            cin>>m;
            a[i]=b[m];
        }


        for(i=0; i<n; i++)
        {
            cin>>c[i];
        }

        for(i=0; i<n; i++)
        {
            l+=a[i];
        }

        k=min(k,l);

        memset(dp,-1,sizeof dp);

        cout<<solve(0,k)<<nl;
    }

    get_lost_idiot;
}

