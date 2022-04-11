/***
 created: 2022-01-27-13.54.00
***/

#include <bits/stdc++.h>
using namespace std;
#define ll int
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'

ll Set(ll N,ll pos){return N=N |(1<<pos);}
ll reset(ll N,ll pos){return N= N & ~(1<<pos);}
bool check(ll N,ll pos){return (bool)(N & (1<<pos));}
vector<pair<ll,ll>>x;
ll sz,k,l;

ll dp[21][21][(1<<15)+2];

ll solve(ll xx,ll yy,ll mask)
{
     if(mask==(1<<sz)-1)
     {
          return  max(abs(k-xx),abs(l-yy));
     }

     if(dp[xx][yy][mask]!=-1) return dp[xx][yy][mask];

     ll ans=INT_MAX;

     for(ll i=0;i<sz;i++)
     {
          if(check(mask,i)==0)
          {
               ans=min(ans,max(abs(xx-x[i].first),abs(yy-x[i].second))+solve(x[i].first,x[i].second,Set(mask,i)));
          }
     }

     return dp[xx][yy][mask]=ans;
}

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   test
   {
        ll n,m,i,j;

        cin>>n>>m;

        char c;

        for(i=0;i<n;i++)
        {
             for(j=0;j<m;j++)
             {
                  cin>>c;
                  if(c=='x')
                  {
                       k=i;
                       l=j;
                  }
                  else if(c=='g')
                  {
                       x.push_back({i,j});
                  }
             }
        }
        memset(dp,-1,sizeof dp);
        sz=x.size();

        cout<<"Case "<<cs<<": "<<solve(k,l,0)<<nl;

        x.clear();
   }

   get_lost_idiot;
}

