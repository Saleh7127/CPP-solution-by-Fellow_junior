/***
 created: 2021-11-11-16.18.12
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'

ll dp[204][25][25];

ll a[555],d,m,n;

ll solve(ll in, ll tk,ll mod)
{
     if(mod<0) mod+=d;

     if(in>n) return 0;

     if(in==n || tk==m)
     {
          if(mod==0 && tk==m) return 1ll;
          return 0;
     }

     if(dp[in][mod][tk]!=-1) return dp[in][mod][tk];

     ll ans=0;

     ans= solve(in+1,tk+1,(mod+a[in])%d) + solve(in+1,tk,mod);

     dp[in][mod][tk]=ans;

     return ans;
}

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);


   test
   {
        ll i,j,k,l,q;

        cin>>n>>q;

        for(i=0;i<n;i++) cin>>a[i];

        cout<<"Case "<<cs<<":"<<nl;

        while(q--)
        {
             cin>>d>>m;

             memset(dp,-1,sizeof dp);

             cout<<solve(0ll,0ll,0ll)<<nl;
        }
   }

   get_lost_idiot;
}

