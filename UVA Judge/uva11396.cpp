#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
vector<ll>g[200005];
bool v[200005];
ll col[200005];
ll ans=0;

void dfs(ll in)
{
     v[in]=1;
     for(auto c:g[in])
     {
          if(col[c]==col[in])
          {
               ans=1;
               return;
          }
          if(v[c]==0)
          {
               if(col[in]==1) col[c]=2;
               else if(col[in]==2) col[c]=1;

               dfs(c);
          }
     }
}

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll n,m,i,j,k,l;

   while(cin>>n && n)
   {
        while(cin>>j>>k && (j+k)>0)
        {
             g[j].push_back(k);
             g[k].push_back(j);
        }
        col[1]=1;
        dfs(1);

        if(ans) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;

        ans=0;
        for(i=0;i<n+4;i++)
        {
             g[i].clear();
             col[i]=0;
             v[i]=0;
        }
   }


   return 0;
}
