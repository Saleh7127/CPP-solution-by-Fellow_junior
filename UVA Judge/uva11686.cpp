/*
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
vector<ll>ans;
vector<ll>g[200000];
ll v[200000];
ll cycle=0;
void dfs(ll c)
{
    v[c]=2;
    for(auto dd:g[c])
    {
        if(v[dd]==2)
        {
             cycle=1;
        }
        if(v[dd]==0)
        {
            dfs(dd);
        }
    }

    v[c]=1;
    ans.push_back(c);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n,m,i,j,k,l;

    while(cin>>n>>m)
    {
        if(n==0 && m==0) break;

        for(i=0; i<m; i++)
        {
            cin>>j>>k;
            g[j].push_back(k);
        }

        for(i=1; i<=n; i++)
        {
            if(v[i]==0)
            {
                dfs(i);
            }
        }

        if(cycle)
        {
            cout<<"IMPOSSIBLE"<<endl;
        }

        else
        {
            reverse(ans.begin(),ans.end());

            for(auto dd:ans)
            {
                 cout<<dd<<endl;
            }
        }


        cycle=0;
        for(i=0;i<200000;i++)
        {
             g[i].clear();
        }
        ans.clear();
        memset(v,0,sizeof v);
    }

    return 0;
}

*/


#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
vector<ll>ans;
vector<ll>g[200000];
///bool v[200000];
map<ll,ll>x;
ll n,m;
void bfs()
{
     queue<ll>q;

     for(ll i=1;i<=n;i++)
     {
          if(x[i]==0)
          {
               q.push(i);
          }
     }

     while(q.empty()==false)
     {
          ll u=q.front();
          q.pop();

          ans.push_back(u);

          for(auto v:g[u])
          {
               x[v]--;
               if(x[v]==0)
               {
                    q.push(v);
               }
          }
     }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll i,j,k,l;

    while(cin>>n>>m)
    {
        if(n==0 && m==0) break;

        for(i=0; i<m; i++)
        {
            cin>>j>>k;
            g[j].push_back(k);
            x[k]++;
        }

        bfs();

        if(ans.size()!=n)
        {
            cout<<"IMPOSSIBLE"<<endl;
        }

        else
        {
            for(i=0;i<ans.size();i++)
            {
                 cout<<ans[i]<<endl;
            }
        }

        x.clear();
        ans.clear();

        for(i=0;i<n+100;i++)
        {
             g[i].clear();
        }
    }


    return 0;
}

