#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
vector<pair<ll,ll>>g[10000];
ll dis[10000];
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   test
   {
       ll n,m,i,j,k,l,a,b,c;
       cin>>n>>m;
       for(i=0;i<n+5;i++)
       {
           g[i].clear();
           dis[i]=10000000000;
       }
       for(i=0;i<m;i++)
       {
           cin>>a>>b>>c;
           g[a].push_back({b,c});
           g[b].push_back({a,c});
       }

       dis[1]=0;
       priority_queue<ll>q;
       q.push(1);

       while(q.empty()==false)
       {
           ll u=q.top();
           q.pop();

           for(auto x:g[u])
           {
               if(dis[x.first]>dis[u]+x.second)
               {
                   dis[x.first]=dis[u]+x.second;
                   q.push(x.first);
               }
           }
       }
       cout<<"Case "<<cs<<": ";

       if(dis[n]==10000000000) cout<<"Impossible"<<endl;
       else cout<<dis[n]<<endl;

   }
   return 0;
}
