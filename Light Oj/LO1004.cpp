#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   test
   {

       ll n,m,i,j,k=1,l;

       cin>>n;

       m=2*n;

       ll dp[m+2][n+2];
       ll a[m+5][n+2];

       for(i=1;i<=n;i++)
       {
           for(j=1;j<=k;j++)
           {
               cin>>a[i][j];
           }
           k++;
       }

       k-=2;

       for(i=n+1;i<=m-1;i++)
       {
           for(j=1;j<=k;j++)
           {
               cin>>a[i][j];
           }
           k--;
       }


       memset(dp,0,sizeof dp);


       k=1;

       for(i=1;i<=n;i++)
       {
           for(j=1;j<=k;j++)
           {
               dp[i][j]=a[i][j]+max(dp[i-1][j-1],dp[i-1][j]);
           }
           k++;
       }

       k-=2;

       for(i=n+1;i<=m-1;i++)
       {
           for(j=1;j<=k;j++)
           {
               dp[i][j]=a[i][j]+max(dp[i-1][j+1],dp[i-1][j]);
           }
           k--;
       }

       cout<<"Case "<<cs<<": "<<dp[m-1][1]<<endl;
   }

   return 0;
}
