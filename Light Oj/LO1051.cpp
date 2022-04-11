/***
 created: 2021-12-04-09.56.07
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'
string a;
ll dp[55][55][55],n;

ll solve(ll in,ll v,ll c)
{
     if(v>=3 || c>=5) return 0;
     if(in==n) return 1;

     if(dp[in][v][c]!=-1) return dp[in][v][c];

     ll ans;

     if(a[in]=='A' || a[in]=='E' || a[in]=='I' || a[in]=='O' || a[in]=='U')
     {
          ans=solve(in+1,v+1,0);
     }
     else if(a[in]=='?')
     {
          ll xx=solve(in+1,v+1,0);
          ll yy=solve(in+1,0,c+1);

          if(xx==yy) ans=xx;
          else ans=2;
     }
     else ans=solve(in+1,0,c+1);

     return dp[in][v][c]=ans;
}


int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   test
   {
        cin>>a;

        n=a.size();

        memset(dp,-1,sizeof dp);

        ll x=solve(0,0,0);

        cout<<"Case "<<cs<<": ";

        if(x==0) cout<<"BAD"<<nl;
        else if(x==1) cout<<"GOOD"<<nl;
        else cout<<"MIXED"<<nl;

   }



   get_lost_idiot;
}
