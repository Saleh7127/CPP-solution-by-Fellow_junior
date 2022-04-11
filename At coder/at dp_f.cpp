#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
ll dp[3005][3005];

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   string a;
   string b;

   ll n,m,i,j,k,l;

   cin>>a>>b;

   n=a.size();
   m=b.size();

   //dp[0][0]=0;

   for(i=0;i<n;i++) dp[i][0]=0;
   for(i=0;i<m;i++) dp[0][i]=0;


   for(i=1;i<=n;i++)
   {
        for(j=1;j<=m;j++)
        {
             if(a[i-1]==b[j-1])
             {
                  dp[i][j]=dp[i-1][j-1]+1;
             }
             else
             {
                  dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
             }
        }
   }

   i=n,j=m;

   string ans="";

   l=dp[n][m];

   while(l--)
   {
        while(i>0 && dp[i-1][j]==dp[i][j]) i--;
        while(j>0 && dp[i][j-1]==dp[i][j]) j--;

        i--,j--;
        ans+=a[i];
   }

   reverse(ans.begin(),ans.end());

   cout<<ans<<endl;


   return 0;
}
