#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
ll dp[2][100005];
ll a[2][100005],b[200005];

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll n,m,i,j,k,l,h;

   cin>>n;


   for(i=0;i<2;i++)
   {
        for(j=0;j<n;j++)
        {
             cin>>a[i][j];
        }
   }


   for(j=0;j<n;j++)
   {
        for(i=0;i<2;i++)
        {
             if(j==0)
             {
                  dp[i][j]=a[i][j];
             }

             else if(i==0)
             {
                  if(j-2>=0)
                  {
                       k=dp[1][j-2]+a[i][j];
                       l=dp[1][j-1]+a[i][j];
                       dp[i][j]=max(k,l);
                  }
                  else
                  {
                       l=dp[1][j-1]+a[i][j];
                       dp[i][j]=l;
                  }

             }

             else if(i==1)
             {
                  if(j-2>=0)
                  {
                       k=dp[0][j-2]+a[i][j];
                       l=dp[0][j-1]+a[i][j];
                       dp[i][j]=max(k,l);
                  }
                  else
                  {
                       l=dp[0][j-1]+a[i][j];
                       dp[i][j]=l;
                  }

             }

             //cout<<dp[i][j]<<endl;
        }
   }


   cout<<max(dp[0][n-1],dp[1][n-1])<<endl;


   return 0;
}
