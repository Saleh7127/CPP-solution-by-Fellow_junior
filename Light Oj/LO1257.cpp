/***
 created: 2021-11-12-00.52.07
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'

vector<ll>g[30005],cost[30005];

ll dis[30005],dis1[30005];
bool v[30005];

ll bfs(ll u)
{
     queue<ll>q;

     memset(dis,0,sizeof dis);
     memset(v,0,sizeof v);

     v[u]=1;
     dis[u]=0;

     q.push(u);

     ll ans=0ll,node,d;

     while(q.empty()==false)
     {
          d=q.front();
          q.pop();

          if(dis[d]>ans)
          {
               ans=dis[d];
               node=d;
          }

          for(ll i=0;i<g[d].size();i++)
          {
               ll dd=g[d][i];

               if(v[dd]==0)
               {
                    v[dd]=1;
                    dis[dd]=dis[d]+cost[d][i];
                    q.push(dd);
               }
          }
     }

     return node;
}

void bfs1(ll u)
{
     queue<ll>q;

     memset(dis1,0,sizeof dis1);
     memset(v,0,sizeof v);

     v[u]=1;
     dis1[u]=0;

     q.push(u);

     ll ans=0ll,node,d;

     while(q.empty()==false)
     {
          d=q.front();
          q.pop();

          for(ll i=0;i<g[d].size();i++)
          {
               ll dd=g[d][i];

               if(v[dd]==0)
               {
                    v[dd]=1;
                    dis1[dd]=dis1[d]+cost[d][i];
                    q.push(dd);
               }
          }
     }
}


int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ///3 bfs for farthest node from every node

   test
   {
        ll n,m,i,j,k,l;

        cin>>n;

        for(i=0;i<n-1;i++)
        {
             cin>>j>>k>>l;

             g[j].push_back(k);
             g[k].push_back(j);
             cost[j].push_back(l);
             cost[k].push_back(l);
        }

        k=bfs(0ll);

        l=bfs(k);

        bfs1(l);

        cout<<"Case "<<cs<<":"<<nl;

        for(i=0;i<n;i++)
        {
             cout<<max(dis[i],dis1[i])<<nl;
        }


        for(i=0;i<n+2;i++)
        {
             g[i].clear();
             cost[i].clear();
        }

   }


   get_lost_idiot;
}
