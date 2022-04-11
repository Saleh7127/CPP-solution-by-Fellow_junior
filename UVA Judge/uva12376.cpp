#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
vector<ll>g[20000];
ll a[20000];
ll v[20000];
ll x,y;

void dfs(ll in)
{
     if(v[in]) return;

     v[in]=1;
     x+=a[in];
     ll l=0,z=-1;

     for(ll i=0;i<g[in].size();i++)
     {
          if(v[g[in][i]]==0)
          {
               if(a[g[in][i]]>l)
               {
                    l=a[g[in][i]];
                    z=g[in][i];
               }
          }
     }

     if(z==-1) y=in;
     else dfs(z);
}

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   test
   {
        ll n,m,i,j,k,l;
        cin>>n>>m;

        for(i=0;i<n+2;i++)
        {
             v[i]=0;
             g[i].clear();
             a[i]=0;
        }
        x=y=0;

        for(i=0;i<n;i++) cin>>a[i];

        for(i=0;i<m;i++)
        {
             cin>>k>>l;
             g[k].push_back(l);
        }
        dfs(0);

        cout<<"Case "<<cs<<": "<<x<<" "<<y<<endl;
   }

   return 0;
}
