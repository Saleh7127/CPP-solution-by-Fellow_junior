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

   sort(a,a+n);
   dp[0]=1;
   for(i=0;i<n;i++)
   {
       for(j=1;j<=m;j++)
       {
           if(j>=a[i])
           {
               dp[j]+=dp[j-a[i]];
               dp[j]%=l;
           }
       }
   }

   cout<<dp[m]<<endl;


   return 0;
}


