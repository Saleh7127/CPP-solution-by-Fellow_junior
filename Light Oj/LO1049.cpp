/***
 created: 2021-11-01-23.08.30
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'
bool v[105][105];
vector<ll>g[1005];
ll cost[105][105];
ll ans,ans1;

void dfs(ll in)
{
     for(auto d:g[in])
     {
          if(!v[in][d])
          {
               ans+=cost[in][d];
               ans1+=cost[d][in];

               v[in][d]=v[d][in]=1;

               dfs(d);
          }
     }
}

///for u and v - we can either go u to v or v to u

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);


   test
   {
        ll n,m,i,j,k,l;

        cin>>n;

        while(n--)
        {
             cin>>j>>k>>l;

             g[j].push_back(k);
             g[k].push_back(j);

             cost[j][k]=0;
             cost[k][j]=l;
        }

        ans=ans1=0;

        dfs(1);

        cout<<"Case "<<cs<<": "<<min(ans,ans1)<<nl;

        memset(v,0,sizeof v);

        for(i=0;i<105;i++) g[i].clear();

   }


   get_lost_idiot;
}
