#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
ll dp[200006];

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll n,m,i,j,W,k,l;


   cin>>n>>W;

   ll v[n+4],w[n+4];

   for(i=0;i<n;i++)
   {
        cin>>w[i]>>v[i];
   }

   for(i=0;i<n;i++)
   {
        for(j=W;j>=w[i];j--)
        {
             dp[j]=max(dp[j],dp[j-w[i]]+v[i]);
        }
   }

   cout<<dp[W]<<endl;

   return 0;
}
