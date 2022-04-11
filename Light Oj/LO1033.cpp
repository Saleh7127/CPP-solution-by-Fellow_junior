/***
 created: 2021-10-20-22.33.08
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0

string a;
ll dp[102][102];

ll solve(ll i,ll j)
{
     if(i>=j) return 0ll;

     if(dp[i][j]!=-1) return dp[i][j];

     ll ans=0ll;

     if(a[i]==a[j])
     {
         ans+=solve(i+1,j-1);
     }
     else  ans+=min(solve(i,j-1),solve(i+1,j))+1;

     dp[i][j]=ans;

     return dp[i][j];
}

/// if current index of a[i]==a[j] go for i+1,j-1;
/// else go for i+1,j or i,j-1;

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   test
   {
        ll n,m,i,j,k,l;

        cin>>a;

        memset(dp,-1,sizeof dp);

        cout<<"Case "<<cs<<": "<<solve(0,a.size()-1)<<endl;
   }

   get_lost_idiot;
}
