#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
vector<ll>adj[100005];
bool seen[100005];
vector<ll>ans;

void dfs(ll x)
{
    seen[x]=1;
    for( auto i : adj[x])
    {
        if(seen[i]==0)
        {
            dfs(i);
        }
    }
}

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll n,m,a,b,i,c=0;
   cin>>n>>m;
   for(i=0;i<m;i++)
   {
       cin>>a>>b;
       adj[a].push_back(b);
       adj[b].push_back(a);
   }
   for(i=1;i<=n;i++)
   {
       if(seen[i]==0)
       {
           c++;
           ans.push_back(i);
           dfs(i);
       }
   }
   cout<<c-1<<endl;
   ll d=ans[0];
   for(i=1;i<c;i++)
   {
       cout<<d<<" "<<ans[i]<<endl;
       d=ans[i];
   }
   return 0;
}
