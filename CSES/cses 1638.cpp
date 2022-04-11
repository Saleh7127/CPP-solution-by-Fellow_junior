#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
ll dp[1002][1002];
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);


   ll n,m,i,j,k,l=1e9+7;

   cin>>n;

   char a[n+2][n+2];

   for(i=1;i<=n;i++)
   {
       for(j=1;j<=n;j++)
       {
           cin>>a[i][j];
       }
   }

   for(i=1;i<=n;i++)
   {
       for(j=1;j<=n;j++)
       {
           if(a[i][j]=='*')
           {
               dp[i][j]=0;
           }
           else if(i==1 && j==1) dp[i][j]=1;
           else
           {
               dp[i][j]=(dp[i-1][j]+dp[i][j-1])%l;

           }
       }
   }

   cout<<dp[n][n]<<endl;

   return 0;
}
