#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
ll v[200000];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    test
    {

        ll n,m,i,j,k,h,l=0;

        cin>>n>>k;

        ll a[n+2],c[n+2];


        ll dp[k+5];

        memset(v,0,sizeof v);
        memset(dp,0,sizeof dp);

        dp[0]=1;

        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }

        for(i=0; i<n; i++)
        {
            cin>>c[i];
        }

        for(i=0; i<n; i++)
        {
            memset(v,0,sizeof v);

            for(j=1; j<=k; j++)
            {
                if(dp[j]==0 && j-a[i]>=0 && dp[j-a[i]] && v[j-a[i]]<c[i])
                {
                    l++;
                    dp[j]=1;
                    v[j]=v[j-a[i]]+1;
                }
            }

        }

        cout<<"Case "<<cs<<": "<<l<<endl;

    }


    return 0;
}
