#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)

vector<ll>g[10000];
bool v[10000];
ll dis[10000];
ll ans=0,root;
void bfs(ll r)
{
    queue<ll>qq;
    v[r]=1;
    dis[r]=1;
    qq.push(r);
    while(!qq.empty())
    {

        ll node=qq.front();

        qq.pop();

        for(ll i=0; i<g[node].size(); i++)
        {
            ll next=g[node][i];

            if(v[next]==0)
            {
                v[next]=1;
                dis[next]=dis[node]+1;
                if(dis[next]==root)
                {
                    ans++;
                }
                qq.push(next);
            }
        }
    }
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n,m,a,b,i,j,k,l;

    cin>>m;
    for(i=0; i<=m; i++)
    {
        g[i].clear();
        v[i]=0;
    }
    for(i=1; i<m; i++)
    {
        cin>>a>>b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    cin>>root;
    ans=0;
    bfs(1);

    cout<<ans<<endl;
    return 0;
}
