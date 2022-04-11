#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
bool v[200005];
vector<ll>g[20000];

void dfs(ll in)
{
     for(auto dd:g[in])
     {
          if(v[dd]==0)
          {
               v[dd]=1;
               dfs(dd);
          }
     }
}

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll n,q,m,i,j,k,l;

   while(cin>>n && n)
   {
        while(cin>>m && m)
        {
             while(cin>>k && k)
             {
                  g[m].push_back(k);
             }
        }

        cin>>q;

        while(q--)
        {
             cin>>j;

             dfs(j);

             set<ll>xx;

             for(i=1;i<=n;i++)
             {
                  if(v[i]==0)
                  {
                       xx.insert(i);
                  }
             }

             cout<<xx.size();

             for(auto dd:xx) cout<<" "<<dd;

             cout<<endl;

             memset(v,0,sizeof v);

        }

        for(i=0;i<n+5;i++)
        {
             g[i].clear();
             v[i]=0;
        }
   }



   return 0;
}
