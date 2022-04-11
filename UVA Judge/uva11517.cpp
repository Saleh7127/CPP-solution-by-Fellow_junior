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

        ll n,m,i,j,k,l;

        cin>>n>>m;
        ll dp[20000];
        ll c[m+4];

        for(i=0;i<10005;i++) dp[i]=INT_MAX;

        for(i=0;i<m;i++) cin>>c[i];

        dp[0]=0;
        for(i=0;i<m;i++)
        {
             for(j=n;j>=0;j--)
             {
                  dp[j+c[i]]=min(dp[j]+1,dp[j+c[i]]);
             }
        }

        for(i=n;i<=10000;i++)
        {
             if(dp[i]<10000)
             {
                  cout<<i<<" "<<dp[i]<<endl;
                  break;
             }
        }
   }

   return 0;
}
