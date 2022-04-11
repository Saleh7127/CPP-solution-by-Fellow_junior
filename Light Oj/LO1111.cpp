/***
 created: 2021-11-19-22.43.39
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'
vector<ll>g[20005];
bool v[20005];
ll cnt[20005];

void bfs(ll u)
{
     memset(v,0,sizeof v);

     queue<ll>q;
     q.push(u);
     cnt[u]++;
     v[u]=1;

     while(q.empty()==false)
     {
          ll x=q.front();
          q.pop();

          for(auto d:g[x])
          {
               if(v[d]==0)
               {
                    q.push(d);
                    cnt[d]++;
                    v[d]=1;
               }
          }
     }

     return;
}

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   test
   {
        ll n,m,i,j,k,l,ans=0;

        cin>>k>>n>>m;

        ll a[n+4];

        for(i=0;i<k;i++) cin>>a[i];

        for(i=0;i<m;i++)
        {
             cin>>j>>l;

             g[j].push_back(l);
        }

        for(i=0;i<k;i++)
        {
             bfs(a[i]);
        }

        for(i=1;i<=n;i++)
        {
             if(cnt[i]==k) ans++;
        }

        cout<<"Case "<<cs<<": "<<ans<<nl;

        for(i=0;i<=10009;i++)
        {
             g[i].clear();
             v[i]=0;
             cnt[i]=0;
        }

   }

   get_lost_idiot;
}
