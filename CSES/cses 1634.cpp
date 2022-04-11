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

   cin>>n>>m;

   ll a[n+5];

   for(i=0;i<n;i++)
   {
       cin>>a[i];
   }

   for(i=1;i<=m;i++)
   {
       dp[i]=INT_MAX;

       for(j=0;j<n;j++)
       {
           if(i>=a[j])
           {
               dp[i]=min(dp[i],dp[i-a[j]]+1ll);
           }
       }

   }

   if(dp[m]<INT_MAX) cout<<dp[m]<<endl;
   else cout<<-1<<endl;

   return 0;
}

