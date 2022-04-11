#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
bool v[200005];
vector<ll>g[20000];
ll ans,mx;
map<ll,string>x;
map<string,ll>y;

void dfs(ll in)
{
     if(v[in]) return;
     v[in]=1;
     ans++;
     for(auto dd:g[in])
     {
          if(v[dd]==0)
          {
               dfs(dd);
          }
     }
}

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   string a,b;

   ll n,m,i,j,k,l;

   while(cin>>n>>m && (n+m)>0)
   {
        for(i=1;i<=n;i++)
        {
             cin>>a;
             y[a]=i;
        }

        for(i=1;i<=m;i++)
        {
             cin>>a>>b;

             j=y[a];
             k=y[b];

             g[j].push_back(k);
             g[k].push_back(j);
        }

        mx=0;

        for(i=1;i<=n;i++)
        {
             if(v[i]==0)
             {
                  ans=0;
                  dfs(i);
                  mx=max(mx,ans);
             }
        }

        cout<<mx<<endl;

        for(i=0;i<n+4;i++)
        {
             g[i].clear();
             v[i]=0;
        }
        y.clear();

   }



   return 0;
}

