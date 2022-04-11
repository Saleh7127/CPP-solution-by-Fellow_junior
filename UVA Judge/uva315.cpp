#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
ll a[205];
vector<ll>g[205];
bool v[205];
ll timer;
ll low[205],in[205];


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
        }
        else
        {
            dfs(child,vertex);

            if(low[child]>=in[vertex] && parent!=-1)
            {
                a[vertex]=1;
            }
            low[vertex]=min(low[vertex],low[child]);

            edge++;
        }
    }

    if(parent==-1 && edge>1)
    {
        a[vertex]=1;
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

    timer=0;
}

int main()
{


    ll n,m,i,j,k,l,rr=1;
    string c,d;

    char cc;

    while(scanf("%lld",&n))
    {
        if(n==0) break;

        clr(n);

        while(scanf("%lld",&m))
        {
             if(m==0) break;

             while(scanf("%c",&cc))
             {
                  if(cc=='\n') break;

                  cin>>k;
                  g[m].push_back(k);
                  g[k].push_back(m);
             }
        }

        for(i=1;i<=n;i++)
        {
             if(v[i]==0)
             {
                  dfs(i,-1);
             }
        }

        l=0;

        for(i=1;i<=n;i++)
        {
             if(a[i]==1) l++;
        }

        printf("%lld\n",l);
    }


    return 0;
}

