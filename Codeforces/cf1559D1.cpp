#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
ll parent[1005][2];

ll findpar(ll x,ll m)
{
     if(parent[x][m]!=x)
     {
          parent[x][m]=findpar(parent[x][m],m);
     }
     return parent[x][m];
}


void unionset(ll u,ll v,ll m)
{
     ll a=findpar(u,m);
     ll b=findpar(v,m);

     if(a!=b)
     {
          parent[a][m]=b;
     }
     return;
}

bool notconnected(ll u,ll v,ll m)
{
     ll a=findpar(u,m);
     ll b=findpar(v,m);

     return a!=b;
}

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll n,m,mm,i,j,k,l,u,v;

   cin>>n>>m>>mm;

   for(i=0;i<=n;i++)
   {
        parent[i][0]=parent[i][1]=i;
   }

   for(i=1;i<=m;i++)
   {
        cin>>u>>v;
        unionset(u,v,0);
   }
   for(i=1;i<=mm;i++)
   {
        cin>>u>>v;
        unionset(u,v,1);
   }

   vector<pair<ll,ll>>x;

   for(i=1;i<=n;i++)
   {
        for(j=i+1;j<=n;j++)
        {
             if(notconnected(i,j,0) && notconnected(i,j,1))
             {
                  x.push_back({i,j});
                  unionset(i,j,0);
                  unionset(i,j,1);
             }
        }
   }

   cout<<x.size()<<endl;

   for(auto d:x)
   {
        cout<<d.first<<" "<<d.second<<endl;
   }


   return 0;
}
