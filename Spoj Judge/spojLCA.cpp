/***
 created: 2022-02-02-15.36.52
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'

vector<ll>g[200005];
ll logg2[200005];
ll depth[200005];
ll blift[200005][20];
ll lg;

void logg()
{
    logg2[1]=0;

    for(ll i=2; i<=1005; i++)
    {
        logg2[i]=logg2[i/2]+1;
    }
}

void dfs(ll a)
{
    for(auto d:g[a])
    {
        depth[d]=depth[a]+1;
        blift[d][0]=a;

        for(ll j=1; j<lg; j++)
        {
            ll par=blift[d][j-1];
            blift[d][j]=blift[par][j-1];
        }
        dfs(d);
    }
}

ll get_lca(ll a,ll b)
{
    if(depth[a]<depth[b]) swap(a,b);

    ll k=depth[a]-depth[b];

    for(ll j=lg-1; j>=0; j--)
    {
        if(k &(1<<j))
        {
            a=blift[a][j];
        }
    }

    if(a==b) return a;

    for(ll j=lg-1; j>=0; j--)
    {
        if(blift[a][j]!=blift[b][j])
        {
            a=blift[a][j];
            b=blift[b][j];
        }
    }
    return blift[a][0];
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    //logg();

    test
    {
        ll q,n,m,i,j,k,l;

        cin>>n;

        for(i=1; i<=n; i++)
        {
            cin>>m;

            for(j=0;j<m;j++)
            {
                cin>>k;
                g[i].push_back(k);
            }
        }

        lg=0;

        while((1<<lg)<=n) lg++;

        dfs(1);

        cin>>q;

        cout<<"Case "<<cs<<":"<<nl;

        while(q--)
        {
            cin>>j>>k;

            cout<<get_lca(j,k)<<nl;
        }

        for(i=0;i<n+2;i++)
        {
             g[i].clear();
             depth[i]=0;
        }


    }
    get_lost_idiot;
}


