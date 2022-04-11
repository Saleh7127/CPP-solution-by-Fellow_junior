/***
 created: 2021-10-23-02.46.09
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0

ll dp[1002][1002];
string a,b;
ll n,m;

ll solve(ll i,ll j)
{
     if(i==n) return m-j;

     if(j==m) return n-i;

     if(dp[i][j]!=-1) return dp[i][j];

     ll ans=1e6;

     if(a[i]==b[j])
     {
          ans=min(ans,solve(i+1,j+1));
     }
     else
     {
          ans=min(ans,1+solve(i+1,j+1)); ///change i or j th char
          ans=min(ans,1+solve(i+1,j));  ///dlt i th char
          ans=min(ans,1+solve(i,j+1));  ///insrt j th char
     }

     return dp[i][j]=ans;
}

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);


   while(cin>>n>>a>>m>>b)
   {
        memset(dp,-1,sizeof dp);

        cout<<solve(0,0)<<endl;
   }


   get_lost_idiot;
}
