#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
string dp[200][200];

string minn(string a,string  b)
{
    if(a.size()==b.size())
    {
        if(a<b) return a;
        else return b;
    }
    else if(a>b) return a;
    else return b;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string a,b,c;
    ll i,j,k,l,n,m;

    test
    {

        cin>>a>>b;

        n=a.size(),m=b.size();

        a="o"+a;
        b="o"+b;

        for(i=0; i<n+2; i++)
        {
            for(j=0; j<m+3; j++)
            {
                dp[i][j].clear();
            }
        }

        for(i=1; i<=n; i++)
        {
            for(j=1; j<=m; j++)
            {
                if(a[i]==b[j])
                {
                    dp[i][j]=dp[i-1][j-1]+a[i];
                }
                else
                {
                    c.clear();
                    c=minn(dp[i-1][j],dp[i][j-1]);
                    dp[i][j]=c;
                }
            }
        }

        cout<<"Case "<<cs<<": ";

        if(dp[n][m].size()==0) cout<<":("<<endl;
        else cout<<dp[n][m]<<endl;

    }

    return 0;
}

