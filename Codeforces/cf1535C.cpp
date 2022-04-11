#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
ll dp[200008][2];
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);


   test
   {
         ll n,m=0,i,j,k,l;

         string a;

         cin>>a;

         n=a.size();

         dp[0][0]=dp[0][1]=0;

         for(i=1;i<=n;i++)
         {
              if(a[i-1]=='0')
              {
                   dp[i][0]=dp[i-1][1]+1;
                   dp[i][1]=0;
              }
              else if(a[i-1]=='1')
              {
                   dp[i][1]=dp[i-1][0]+1;
                   dp[i][0]=0;
              }
              else
              {
                   k=dp[i-1][1];
                   l=dp[i-1][0];
                   dp[i][0]=k+1;
                   dp[i][1]=l+1;
              }
              m+=max(dp[i][0],dp[i][1]);
         }

         cout<<m<<endl;
   }

   return 0;
}
