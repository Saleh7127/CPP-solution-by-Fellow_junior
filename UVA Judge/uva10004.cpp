#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
vector<ll>g[100000];
ll visit[100000],c[10000];
bool dfs(ll ind,ll color)
{
    visit[ind]=color;
    c[ind]=color;
    for(auto i : g[ind])
    {
        if(visit[i]==0)
        {
            if(dfs(i,color^1)==false) return false;
        }
        else
        {
            if(c[i]==c[ind]) return false;
        }
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n,m,i,j,k,l;

    while(cin>>n>>m && n&&m)
    {
        for(i=0; i<n; i++)
        {
            g[i].clear();
            visit[i]=0;
        }

        for(i=0; i<m; i++)
        {
            cin>>k>>l;
            g[k].push_back(l);
            g[l].push_back(k);
        }
        if(dfs(0,1)==true) cout<<"BICOLORABLE."<<endl;
        else cout<<"NOT BICOLORABLE."<<endl;
    }


    return 0;
}
