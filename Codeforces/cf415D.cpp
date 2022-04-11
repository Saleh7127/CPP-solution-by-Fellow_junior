#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
ll dp[2001][2001];

ll solve(ll n,ll k,ll in,ll num)
{
     if(in==k) return 1;

     if(dp[in][num]!=-1) return dp[in][num];

     ll x=0,lim;

     lim=n/num;

     for(ll i=1;i<=lim;i++)
     {
          x+=solve(n,k,in+1,num*i);
     }

     dp[in][num]=x%1000000007;

     return dp[in][num];
}

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll n,k;

   cin>>n>>k;

   memset(dp,-1,sizeof dp);

   cout<<solve(n,k,0,1)<<endl;


   return 0;
}
