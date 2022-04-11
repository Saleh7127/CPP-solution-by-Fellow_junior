#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
ll dp[200005];
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll n,m,i,j,k,l;

   for(i=0;i<=200005;i++)
   {
       dp[i]=INT_MAX;
   }


   cin>>n;
   ll a[n+4];

   for(i=1;i<=n;i++)
   {
       cin>>a[i];
   }

   dp[1]=0;
   dp[2]=abs(a[1]-a[2]);

   for(i=3;i<=n;i++)
   {
       dp[i]=min(abs(a[i]-a[i-1])+dp[i-1],abs(a[i]-a[i-2])+dp[i-2]);
   }

   cout<<dp[n]<<endl;

   return 0;
}

