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

       ll n,m,i,j,k,l=100000007;

       cin>>n>>k;

       ll c[n+5],dp[k+5];

       for(i=0;i<n;i++) cin>>c[i];


       memset(dp,0,sizeof dp);
       dp[0]=1;

       for(i=0;i<n;i++)
       {
           for(j=c[i];j<=k;j++)
           {
               dp[j]+=(dp[j-c[i]]);
               dp[j]%=l;
           }
       }
       cout<<"Case "<<cs<<": "<<dp[k]<<endl;
   }

   return 0;
}
