/***
 created: 2021-10-20-22.51.44
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
ll dp[52][52][52];

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);


   test
   {
        string a,b,c;

        ll n,m,i,j,k,l;

        cin>>a>>b>>c;

        n=a.size();
        m=b.size();
        l=c.size();

        for(i=0;i<52;i++)
        {
             for(j=0;j<52;j++)
             {
                  for(k=0;k<52;k++)
                  {
                       dp[i][j][k]=0;
                  }
             }
        }

        for(i=0;i<=n;i++)
        {
             for(j=0;j<=m;j++)
             {
                  for(k=0;k<=l;k++)
                  {
                       if(i==0 || j==0 || k==0)
                       {
                            dp[i][j][k]=0;
                       }

                       else if(a[i-1]==b[j-1] && a[i-1]==c[k-1] && b[j-1]==c[k-1])
                       {
                            dp[i][j][k] = 1 + dp[i-1][j-1][k-1];
                       }

                       else
                       {
                            dp[i][j][k]=max({dp[i-1][j][k],dp[i][j-1][k],dp[i][j][k-1]});
                       }
                  }
             }
        }


        cout<<"Case "<<cs<<": "<<dp[n][m][l]<<endl;
   }


   get_lost_idiot;
}

/*



*/
