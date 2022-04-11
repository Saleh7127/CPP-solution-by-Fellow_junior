#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
vector<ll>g[100005];
ll visit[100005],c[100005];
bool dfs(ll ind,ll color)
{
    visit[ind]=1;
    c[ind]=color;
    for(auto i : g[ind])
    {
        if(c[i]==0)
        {
            if(dfs(i,c[ind]^3)==false) return false;
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

    cin>>n>>m;


    memset(visit,0,sizeof(visit));
    memset(c,0,sizeof(c));

    for(i=0; i<m; i++)
    {
        cin>>k>>l;
        g[k].push_back(l);
        g[l].push_back(k);
    }
    bool dd=0;
    for(i=1;i<=n;i++)
    {
        if(visit[i]==0)
        {
            if(dfs(i,1)==0)
            {
                dd=1;
            }
        }
    }

    if(dd==1) cout<<"IMPOSSIBLE"<<endl;
    else
    {
        for(i=1;i<=n;i++)
        {
            cout<<c[i]<<" ";
        }
    }
    return 0;
}
