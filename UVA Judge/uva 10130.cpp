#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    test
    {

        ll n,m,i,j,k,l=0;

        ll v[1005],w[1005];

        cin>>n;

        for(i=0; i<n; i++)
        {
            cin>>v[i]>>w[i];
        }

        ll dp[50];

        memset(dp,0,sizeof dp);

        for(i=0; i<n; i++)
        {
            for(j=30; j>=0; j--)
            {
                if(w[i]<=j && dp[j]<(dp[j-w[i]]+v[i]))
                {
                    dp[j]=dp[j-w[i]]+v[i];
                }
            }
        }

        cin>>m;

        while(m--)
        {
            cin>>k;

            l+=dp[k];
        }

        cout<<l<<endl;
    }


    return 0;
}
