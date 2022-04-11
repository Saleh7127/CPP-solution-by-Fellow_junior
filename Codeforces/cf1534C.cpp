#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
vector<ll>g[500005];
bool v[400005];

void dfs(ll in)
{
     v[in]=1;

     for(auto d:g[in])
     {
          if(v[d]==0) dfs(d);
     }
}

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);


   test
   {
        ll n,m,i,j,k=1e9+7,l=1;


        cin>>n;

        ll a[n+4],b[n+4];

        for(i=0;i<n;i++) cin>>a[i];
        for(i=0;i<n;i++) cin>>b[i];


        for(i=0;i<n;i++)
        {
             g[a[i]].push_back(b[i]);
             g[b[i]].push_back(a[i]);
        }

        for(i=1;i<=n;i++)
        {
             if(v[i]==0)
             {
                  dfs(i);
                  l*=2;
                  l%=k;
             }
        }

        cout<<l<<endl;

        for(i=0;i<n+1;i++)
        {
             g[i].clear();
             v[i]=0;
        }
   }

   return 0;
}
