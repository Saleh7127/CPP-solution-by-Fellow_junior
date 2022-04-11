#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)

vector<ll>g[10000];
bool v[10000];
ll x=0,y=0,c[10000];

void dfs(ll nd)
{
    if(v[nd]==1) return;

    x+=c[nd];
    y++;
    v[nd]=1;

    for(ll i=0; i<g[nd].size(); i++)
    {
        if(v[g[nd][i]]==0)
        {
            dfs(g[nd][i]);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    test
    {
        ll a,b,n,m,i,j,k=0,l=0;

        cin>>n>>m;

        for(i=0; i<n+10; i++)
        {
            g[i].clear();
            v[i]=0;
            c[i]=0;
        }

        for(i=1; i<=n; i++)
        {
            cin>>c[i];
            k+=c[i];

        }

        for(i=0; i<m; i++)
        {
            cin>>a>>b;
            g[a].push_back(b);
            g[b].push_back(a);
        }

        ll av=k/n;

        for(i=1; i<=n; i++)
        {
            x=0;
            y=0;
            if(v[i]==0)
            {
                dfs(i);
            }
            if(x!=(y*av))
            {
                l=1;
                break;
            }
        }

        cout<<"Case "<<cs<<": ";

        if(l==0)
        {
            cout<<"Yes"<<endl;
        }
        else cout<<"No"<<endl;
    }


    return 0;
}
