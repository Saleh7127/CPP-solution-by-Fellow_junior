#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
vector<ll>graph[100005];
bool visit[100005];

void dfs(ll x)
{
    visit[x]=1;
    for(ll i=0; i<graph[x].size(); i++)
    {
        ll nx=graph[x][i];
        if(visit[nx]==0)
        {
            dfs(nx);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);



    memset(visit,0,sizeof(visit));
    memset(graph,0,sizeof(graph));

    ll n,m,a,c,d,e,i,j,k,l=0;

    cin>>n>>m;
    k=n;
    for(i=0; i<m; i++)
    {
        cin>>a>>c;
        graph[a].push_back(c);
        graph[c].push_back(a);
    }

    for(i=1; i<=n; i++)
    {
        if(visit[i]==0)
        {
            l++;
            dfs(i);
        }
    }
    cout<<l<<endl;

    return 0;
}
