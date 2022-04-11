/***
 created: 2022-01-30-18.56.32
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'
ll ans=0;
vector<pair<ll,ll>>g[200005];
ll h[200005];
vector<ll>dis(200005,-2e18);
void dijkstra()
{
     priority_queue<pair<ll,ll>>q;

     dis[1]=0;
     q.push({0,1});

     while(q.empty()==false)
     {
          auto d=q.top().second;

          q.pop();

          for(auto e:g[d])
          {
               ll u=e.first,v=e.second;
               if(dis[d]+v>dis[u])
               {
                    dis[u]=dis[d]+v;
                    q.push({dis[u],u});
               }
          }
     }
}


int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll n,m,i,j,k,l;

   cin>>n>>m;

   for(i=1;i<=n;i++)
   {
        cin>>h[i];
   }

   for(i=0;i<m;i++)
   {
        cin>>j>>k;

        if(h[j]>=h[k])
        {
             g[j].push_back({k,h[j]-h[k]});
             g[k].push_back({j,-2*(h[j]-h[k])});
        }
        else
        {
             g[j].push_back({k,-2*(h[k]-h[j])});
             g[k].push_back({j,h[k]-h[j]});
        }
   }

   dijkstra();

   cout << max(0ll,*max_element(dis.begin(), dis.end()))<<nl;

   get_lost_idiot;
}

