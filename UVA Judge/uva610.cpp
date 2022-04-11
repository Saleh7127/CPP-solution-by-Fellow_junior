#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
ll a[2005];
vector<ll>g[2005];
bool v[2005];
ll timer;
ll low[2005],in[2005];
vector<pair<ll,ll>>ans;

void dfs(ll vertex,ll parent)
{
    v[vertex]=1;

    low[vertex] = in[vertex] = ++timer;

    ll edge=0;

    for(auto child:g[vertex])
    {
        if(child==parent) continue;

        if(v[child])
        {
            low[vertex]=min(low[vertex],in[child]);

            ///child have a lower in time
            /// means have a back edge/cycle
            if(in[vertex]>in[child])
            {
                 ans.push_back({vertex,child});
            }
        }
        else
        {
            dfs(child,vertex);

            ///if not visited then there must be a edge
            ///if it's also a bridge then two way

            if(low[child]>in[vertex])
            {
                ans.push_back({child,vertex});
            }
            ans.push_back({vertex,child});
            low[vertex]=min(low[vertex],low[child]);
        }
    }
}


void clr(ll n)
{
    for(ll i=0; i<n+4; i++)
    {
        g[i].clear();
        v[i]=0;
        low[i]=-1;
        in[i]=-1;
        a[i]=0;
    }
    ans.clear();
    timer=0;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n,m,i,j,k,l,rr=1;

    while(cin>>n>>m && (n+m)>0)
    {
         clr(n);

         while(m--)
         {
              cin>>j>>k;
              g[j].push_back(k);
              g[k].push_back(j);
         }

         for(i=1;i<=n;i++)
         {
              if(v[i]==0)
              {
                   dfs(i,-1);
              }
         }

         cout<<rr++<<endl<<endl;

         for(auto ss:ans)
         {
              cout<<ss.first<<" "<<ss.second<<endl;
         }

         cout<<"#"<<endl;

    }

    return 0;
}

