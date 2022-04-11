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

        string a,b;
        cin>>a>>b;
        ll n,m,i,j,k,l,c=0;
        n=a.size();
        m=b.size();
        ll dp[n+1][m+1];


        for(i=0; i<=n; i++)
        {
            for(j=0; j<=m; j++)
            {
                if(i==0 || j==0)
                {
                    dp[i][j]=0;
                }
                else if(a[i-1]==b[j-1])
                {
                    dp[i][j]=dp[i-1][j-1]+1;
                    c=max(c,dp[i][j]);
                }
                else dp[i][j]=0;
            }
        }


        cout<<n+m-(2*c)<<endl;

    }


    return 0;
}



/*
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

        string a,b;
        ll i,j,k,l,n,m,c=0,d;

        cin>>a>>b;

        for(i=0; i<a.size(); i++)
        {
            for(j=0; j<b.size(); j++)
            {

                string x,y;

                for(k=i; k<a.size(); k++)
                {
                    x+=a[k];
                }

                for(k=j; k<b.size(); k++)
                {
                    y+=b[k];
                }

                n=0;

                for(l=0; l<min(x.size(),y.size()); l++)
                {
                    if(x[l]!=y[l])
                    {
                        n=1;
                        d=l;
                        break;
                    }
                }
                if(n==0) d=l;

                c=max(c,d);
            }
        }

        cout<<(a.size()+b.size())-(2*c)<<endl;

    }

    return 0;
}
*/
