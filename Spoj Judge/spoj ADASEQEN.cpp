/***
 created: 2021-11-09-16.22.11
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'

ll dp[2005][2005];

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);


   map<char,ll>x;

   string a,b;
   ll n,m,i,j,k,l;

   cin>>n>>m;

   char c='a';

   for(i=0;i<26;i++)
   {
        cin>>j;

        x[c]=j;
        c++;
   }

   cin.ignore();

   cin>>a>>b;


   for(i=1;i<=n;i++)
   {
        for(j=1;j<=m;j++)
        {

             if(a[i-1]==b[j-1])
             {
                  dp[i][j]=max(dp[i][j],dp[i-1][j-1]+x[a[i]]);
             }

             else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
        }
   }


   cout<<dp[n][m]<<nl;


   get_lost_idiot;
}
