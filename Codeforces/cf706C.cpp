/***
 created: 2021-12-06-19.25.25
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'

string o[100005],r[100005];
ll c[100005];
ll dp[100005][3],n;

ll solve(string x,ll in,ll cc)
{
     if(in>=n) return 0;

     if(dp[in][cc]!=-1) return dp[in][cc];

     ll c1,c2;

     c1=c2=1e17;

     if(o[in]>=x) c1=solve(o[in],in+1,1);
     if(r[in]>=x) c2=c[in]+solve(r[in],in+1,2);

     return dp[in][cc]=min(c1,c2);
}


int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);


   ll m,i,j,k,l;

   cin>>n;

   for(i=0;i<n;i++) cin>>c[i];

   memset(dp,-1,sizeof dp);

   for(i=0;i<n;i++)
   {
        cin>>o[i];

        r[i]=o[i];

        reverse(r[i].begin(),r[i].end());
   }

   l=solve("",0,1);

   if(l==1e17) cout<<-1<<nl;
   else cout<<l<<nl;


   get_lost_idiot;
}
