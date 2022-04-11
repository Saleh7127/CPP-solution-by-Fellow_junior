/***
 created: 2021-12-05-01.10.41
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'

ll dp[65][65];
ll n;
string a;

ll solve(ll i,ll j)
{
     if(i>j) return 0;

     if(i==j) return 1;

     if(dp[i][j]!=-1) return dp[i][j];

     ll ans;

     if(a[i]==a[j])
     {
          ans = 1 + solve(i+1,j) + solve(i,j-1);
     }
     else
     {
          ans = solve(i+1,j) + solve(i,j-1) - solve(i+1,j-1);
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

        cout<<"Case "<<cs<<": "<<solve(0,a.size()-1)<<nl;
   }



   get_lost_idiot;
}
