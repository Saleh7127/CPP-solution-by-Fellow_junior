#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n,m,i,j,k=0,l,ans=0;
    cin>>n>>m;
    ll a[n+5][m+5];
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
        {
            cin>>a[i][j];
        }
    }
    for(i=n-1; i>=2; i--)
    {
        for(j=m-1; j>=2; j--)
        {
            if(a[i][j]==0)
            {
                l=min(a[i+1][j],a[i][j+1]);
                a[i][j]=l-1;
            }
        }
    }

    for(i=1; i<=n; i++)
    {
        for(j=1; j<m; j++)
        {
            if(a[i][j]>=a[i][j+1])
            {
                k=1;
            }
        }
    }

    for(j=1; j<=m; j++)
    {
        for(i=1; i<n; i++)
        {
            if(a[i][j]>=a[i+1][j])
            {
                k=1;
            }
        }
    }

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
        {
            ans+=a[i][j];
        }
    }

    if(k) cout<<-1<<endl;
    else cout<<ans<<endl;

    return 0;
}
