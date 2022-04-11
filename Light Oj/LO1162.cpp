/***
 created: 2022-02-03-01.29.40
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'

vector<pair<ll,ll>>g[100005];

ll blift[100005][19];
ll mx[100005][19];
ll mn[100005][19];
ll depth[100005];
bool v[100005];
ll n,lg;

void dfs(ll node)
{
    v[node]=1;
    for(auto d:g[node])
    {
        if(v[d.first]==0)
        {
            depth[d.first]=depth[node]+1;
            blift[d.first][0]=node;
            mx[d.first][0]=d.second;
            mn[d.first][0]=d.second;
            dfs(d.first);
        }
    }
}

void binarylifting()
{
    for(ll j=1; j<=lg; j++)
    {
        for(ll i=1; i<=n; i++)
        {
            if(blift[i][j-1]!=-1)
            {
                ll par = blift[i][j-1];

                blift[i][j] = blift[par][j-1];

                mx[i][j] = max( mx[i][j-1], mx[par][j-1] );
                mn[i][j] = min( mn[i][j-1], mn[par][j-1] );
            }
        }
    }
}

void minmaxroad(ll a,ll b)
{
    ll mnr=INT_MAX, mxr=INT_MIN;

    if(depth[a]<depth[b]) swap(a,b);

    ll k=depth[a]-depth[b];

    for(ll j=lg-1; j>=0; j--)
    {
        if(k &(1<<j))
        {
            mnr= min(mnr, mn[a][j]);
            mxr= max(mxr, mx[a][j]);

            a=blift[a][j];
        }
    }

    if(a==b)
    {
        cout<<mnr<<" "<<mxr<<nl;
        return;
    }

    for(ll j=lg-1; j>=0; j--)
    {
        if(blift[b][j]!=-1 &&  blift[a][j]!=blift[b][j])
        {
            mnr= min(mnr,min(mn[a][j], mn[b][j]));
            mxr= max(mxr,max(mx[a][j], mx[b][j]));

            a=blift[a][j];
            b=blift[b][j];
        }
    }

    mnr= min(mnr,min(mn[a][0], mn[b][0]));
    mxr= max(mxr,max(mx[a][0], mx[b][0]));

    cout<<mnr<<" "<<mxr<<nl;

    return;
}

void clr()
{
    for(ll j=0; j<n+1; j++)
    {
        g[j].clear();
        depth[j]=0;
        v[j]=0;
        for(ll i=0; i<lg; i++)
        {
            mx[j][i]=INT_MIN;
            mn[j][i]=INT_MAX;
            blift[j][i]=-1;
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
        ll q,i,j,k,l;

        cin>>n;

        lg=0;

        while((1<<lg)<=n) lg++;

        clr();

        for(i=1; i<n; i++)
        {
            cin>>j>>k>>l;

            g[j].push_back({k,l});
            g[k].push_back({j,l});
        }

        memset(blift,-1,sizeof blift);

        dfs(1);

        binarylifting();

        cout<<"Case "<<cs<<":"<<nl;

        cin>>q;

        while(q--)
        {
            cin>>j>>k;

            minmaxroad(j,k);
        }
    }

    get_lost_idiot;
}

