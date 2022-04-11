/***
 created: 2021-10-23-01.09.17
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0

ll dp[1002][1002];
string a;

ll solve(ll i,ll j)
{
     if(i>=j) return 0ll;

     if(dp[i][j]!=-1) return dp[i][j];

     ll ans=1e6;

     if(a[i]==a[j])
     {
          ans=min(ans,solve(i+1,j-1));
     }
     else
     {
          ans=min(ans,1+solve(i+1,j-1)); ///replace i or j th char
          ans=min(ans,1+solve(i+1,j));  ///dlt i th char
          ans=min(ans,1+solve(i,j-1));  ///dlt j th char
     }

     return dp[i][j]=ans;
}

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);


   test
   {
        cin>>a;

        memset(dp,-1,sizeof dp);

        cout<<"Case "<<cs<<": "<<solve(0,a.size()-1)<<endl;
   }


   get_lost_idiot;
}
