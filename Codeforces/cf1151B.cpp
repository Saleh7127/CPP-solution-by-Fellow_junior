/***
 created: 2022-01-26-14.28.45
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'
ll n,m,a[505][1024],dp[505][1024];
vector<ll>ans;

ll solve(ll in,ll xr)
{
     if(in==n) return xr>0;

     if(dp[in][xr]!=-1) return dp[in][xr];

     ll x=0;

     for(ll i=0;i<m;i++)
     {
          x|=solve(in+1,xr^a[in][i]);
          if(x>0)
          {
               ans.push_back(i);
               break;
          }
     }
     return dp[in][xr]=x;
}

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   cin>>n>>m;

   for(ll i=0;i<n;i++)
   {
        for(ll j=0;j<m;j++)
        {
             cin>>a[i][j];
        }
   }

   memset(dp,-1,sizeof dp);

   ll f=solve(0,0);

   if(f==0) cout<<"NIE"<<nl;
   else
   {
        cout<<"TAK"<<nl;
        for(ll i=ans.size()-1;i>=0;i--)
        {
             cout<<++ans[i]<<" ";
        }
        cout<<nl;
   }

   get_lost_idiot;
}
