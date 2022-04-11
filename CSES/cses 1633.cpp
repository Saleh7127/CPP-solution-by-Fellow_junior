#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
ll dp[1000005];
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);


   ll n,m,i,j,k,l=1e9+7;

   cin>>n;

   dp[0]=1;

   for(i=1;i<=n;i++)
   {
       for(j=1;j<=6;j++)
       {
           if(i>=j && dp[i-j])
           {
               dp[i]+=dp[i-j];
           }
       }
       dp[i]%=l;
   }

   cout<<dp[n]<<endl;

   return 0;
}
