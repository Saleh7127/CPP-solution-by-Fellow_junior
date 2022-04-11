/***
 created: 2022-01-27-23.47.37
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'

int f[500];
int a[105][105];
int dp[105][1005];
int n,s,c,e,t;

int solve(int in,int city)
{
     if(dp[in][city]!=-1) return dp[in][city];
     if(city==0)
     {
          if(f[in]) return 0;
          else return INT_MIN;
     }

     int ans=INT_MIN;

     for(int i=1;i<=c;i++)
     {
          if(in!=i)
          {
               ans=max(ans,a[in][i]+solve(i,city-1));
          }
     }

     return dp[in][city]=ans;
}

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);


   while(cin>>c>>s>>e>>t && (c+s+e+t)!=0)
   {
        for(int i=1;i<=c;i++)
        {
             f[i]=0;
             for(int j=1;j<=c;j++)
             {
                  cin>>a[i][j];
             }
        }

        for(int i=1;i<=e;i++)
        {
             int m;
             cin>>m;
             f[m]=1;
        }

        memset(dp,-1,sizeof dp);

        cout<<solve(s,t)<<nl;
   }

   get_lost_idiot;
}

