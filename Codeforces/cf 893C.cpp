#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)

vector<ll>g[100005];
bool v[100005];
ll a[100005];
ll x;

ll dfs(ll in)
{
    v[in]=1;
    x=min(x,a[in]);
    for(auto i : g[in])
    {
        if(v[i]==0)
        {
          dfs(i);
        }
    }
    return x;
}

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll n,m,b,c,i,j,k,l=0;
   cin>>n>>m;
   for(i=1;i<=n;i++)
   {
       cin>>a[i];
   }
   for(i=0;i<m;i++)
   {
       cin>>b>>c;
       g[b].push_back(c);
       g[c].push_back(b);
   }

   for(i=1;i<=n;i++)
   {
       if(v[i]==0)
       {
           x=1000000000000000;
           l+=dfs(i);
       }
   }
   cout<<l<<endl;
   return 0;
}
