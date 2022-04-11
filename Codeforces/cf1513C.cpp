#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
ll dp[200005][12];
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll n,m,i,j,k,l=1e9+7;


   for(i=0;i<10;i++) dp[0][i]=1;

   for(i=1;i<=200002;i++)
   {
       for(j=0;j<9;j++)
       {
           dp[i][j]=dp[i-1][j+1];
       }
       dp[i][9]=(dp[i-1][0]+dp[i-1][1])%l;
   }


   test
   {
       string a;
       cin>>a>>m;
       k=0;
       for(char s:a)
       {
           k=(k+dp[m][s-'0'])%l;
       }
       cout<<k<<endl;
   }

   return 0;
}
