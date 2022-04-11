/***
 created: 2021-11-21-16.21.18
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'
ll dp[20005],n;
string a;

ll solve(ll in)
{
     if(in==n) return 1ll;
     if(a[in]=='0') return 0ll;
     if(dp[in]!=-1) return dp[in];

     ll x=0;

     x+=solve(in+1);

     if(a[in]=='1' || (a[in]=='2' && a[in+1]<'7'))
     {
          x+=solve(in+2);
     }

     return dp[in]=x;
}

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);


   while(cin>>a && a!="0")
   {
        memset(dp,-1,sizeof dp);
        n=a.size();

        cout<<solve(0)<<nl;
   }


   get_lost_idiot;
}

