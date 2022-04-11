#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
vector<ll>g[50000];
vector<ll>cost[50000];
bool v[50000];
ll m,n,dis[50000];
void bfs(ll x)
{
    queue<ll>s;
    ll i,j,k,l;
    for(i=0;i<n;i++)
    {
        v[i]=0;
        dis[i]=10000000000;
    }
    s.push(x);
    v[x]=1;
    dis[x]=0;
    while(s.empty()==false)
    {
        ll node=s.front();
        s.pop();
        for(i=0;i<g[node].size();i++)
        {
            ll cur=g[node][i];
            if(v[cur]==0)
            {
                v[cur]=1;
                dis[cur]=dis[node]+cost[node][i];
                s.push(cur);
            }
        }
    }

}

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   test
   {
       ll i,j,k,l=0,a,b,c;
       cin>>n;
       for(i=0;i<n-1;i++)
       {
           cin>>a>>b>>c;
           g[a].push_back(b);
           g[b].push_back(a);

           cost[a].push_back(c);
           cost[b].push_back(c);
       }
       bfs(0);
       for(i=0;i<n;i++)
       {
           if(dis[i]>l)
           {
               m=i;
               l=dis[i];
           }
       }
       bfs(m);
       for(i=0;i<n;i++)
       {
           if(dis[i]>l)
           {
               l=dis[i];
           }
       }
       cout<<"Case "<<cs<<": "<<l<<endl;
       for(i=0;i<n;i++)
       {
           g[i].clear();
           cost[i].clear();
       }
   }


   return 0;
}
