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

        ll n,m,i,j,k,h,l=100000007;

        cin>>n>>k;

        ll a[n+2],c[n+2];


        ll dp[k+5];

        for(i=0;i<=k+2;i++)
        {
            dp[i]=0;
        }

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
            for(h=k; h>0; h--)
            {
                for(j=1; j<=c[i]; j++)
                {
                    if(h>=(j*a[i]))
                    {
                        dp[h]=(dp[h]+dp[h-(j*a[i])])%l;
                    }
                }
            }

        }

        cout<<"Case "<<cs<<": "<<dp[k]<<endl;

    }


    return 0;
}

