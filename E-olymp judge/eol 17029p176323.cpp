#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
vector<ll>g[100005];
ll visit[100005];
void dfs(ll ind)
{
    visit[ind]=1;
    for(auto i : g[ind])
    {
        if(visit[i]==0)
        {
            dfs(i);
        }
    }

}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    ll n,m,i,j,k,l,x=0;

    cin>>n>>m;


    memset(visit,0,sizeof(visit));


    for(i=0; i<m; i++)
    {
        cin>>k>>l;
        g[k].push_back(l);
        g[l].push_back(k);
        x=max(x,max(l,k));
    }
    k=0;
    for(i=1; i<=n; i++)
    {
        if(visit[i]==0)
        {
            k++;
            dfs(i);
        }
    }
    cout<<k<<endl;


    for(i=1; i<=x; i++)
    {
        g[i].clear();
    }

    return 0;
}
