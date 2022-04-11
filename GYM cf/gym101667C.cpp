#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)

ll v[200005];
vector<ll>g[200005];

ll dfs(ll in)
{
     if(v[in]==0)
     {
          v[in]=1;
          for(ll i=0;i<g[in].size();i++)
          {
               ll x=g[in][i];
               if(g[x].size()>g[in].size())
               {
                    v[in]=max(v[in],dfs(x)+1);
               }
          }

     }
     return v[in];
}

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);


   ll n,m,i,j,k,l=0;

   cin>>n>>m;

   for(i=0;i<m;i++)
   {
        cin>>j>>k;
        g[j].push_back(k);
        g[k].push_back(j);
   }

   for(i=0;i<n;i++)
   {
        if(v[i]==0)
        {
             l=max(l,dfs(i));
        }
   }
   cout<<l<<endl;
   return 0;
}
