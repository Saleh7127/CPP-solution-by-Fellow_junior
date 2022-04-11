/***
 created: 2022-02-16-22.31.00
***/

#include <bits/stdc++.h>
using namespace std;
#define ll int
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'

vector< pair<ll,ll> >ans;
ll low[200005],in[200005];
vector<ll>g[200005];
bool v[200005];
ll timer;
void dfs(ll vertex,ll parent)
{
    v[vertex]=1;

    low[vertex]=in[vertex]=++timer;

    for(auto child: g[vertex])
    {
        if(child==parent) continue;

        if(v[child])
        {
            low[vertex]=min(low[vertex],in[child]);
        }
        else
        {
            dfs(child,vertex);

            if(low[child]>in[vertex])
            {
                ans.push_back({min(vertex,child),max(vertex,child)});
            }
            low[vertex]=min(low[vertex],low[child]);
        }
    }

    return;

}

void clr(ll n)
{
    for(ll i=0; i<n+2; i++)
    {
        g[i].clear();
        v[i]=0;
        low[i]=0;
        in[i]=0;
    }
    ans.clear();
    timer=0;
}

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n,m,i,j,k,l;

    test
    {
        cin>>n;

        clr(n);

        for(ll yy=0; yy<n; yy++)
        {
            char cc;

            cin>>m>>cc>>k>>cc;

            for(i=0; i<k; i++)
            {
                cin>>j;
                g[m].push_back(j);
            }
        }


        for(i=0; i<n; i++)
        {
            if(v[i]==0)
            {
                dfs(i,-1);
            }
        }

        sort(ans.begin(),ans.end());

        cout<<"Case "<<cs<<":"<<nl;

        cout<<ans.size()<<" critical links"<<nl;

        for(i=0; i<ans.size(); i++)
        {
            cout<<ans[i].first<<" - "<<ans[i].second<<nl;
        }
    }

    get_lost_idiot;
}

