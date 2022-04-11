#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
vector<ll>graph[200005];
bool visit[200005];

void dfs(ll x)
{
    visit[x]=true;
    for(ll i=0;i<graph[x].size();i++)
    {
        if(visit[graph[x][i]]==0)
        {
            dfs(graph[x][i]);
        }
    }
}

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll n,m,i,j,k,l;
   cin>>n>>m;

   for(i=0;i<m;i++)
   {
       ll a,c;
       cin>>a>>c;
       graph[a].push_back(c);
       graph[c].push_back(a);
   }
   dfs(1);

   for(i=1;i<=n;i++)
   {
       if(visit[i]==0)
       {
           cout<<"NO"<<endl;
           return 0;
       }
   }
   if(n-1==m) cout<<"YES"<<endl;
   else cout<<"NO"<<endl;

   return 0;
}
