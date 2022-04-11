
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'

ll a[1005][1005];
ll dp[200][200];
ll n,m;


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll i,j,k,l,h,ans=1000000000000000;

    cin>>n>>m;


    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            cin>>a[i][j];
        }
    }

    for(i=1; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            k=a[i-1][j];

            if(j>0) k=min(k,a[i-1][j-1]);

            if(j+1<m) k=min(k,a[i-1][j+1]);

            a[i][j]+=k;
        }

    }

    for(j=0; j<m; j++)
    {
        ans=min(ans,a[n-1][j]);
    }


    cout<<ans<<nl;


    get_lost_idiot;
}
