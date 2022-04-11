/***
 created: 2022-03-06-17.32.11
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'
vector<pair<ll,ll>>g[100005];
ll ans;


ll solve(vector<ll>x)
{
    sort(x.begin(),x.end());


    ll i,s=0,l=0;

    for(i=0;i<x.size();i++)
    {
        l+=(x[i]*i-s);
        s+=x[i];
    }

    return l;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n,m,i,j,k,l=0;

    cin>>n>>m;


    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
        {
            cin>>k;
            l=max(l,k);
            g[k].push_back({i,j});
        }
    }


    for(m=1; m<=l; m++)
    {
        if(g[m].size())
        {
            vector<ll>x,y;

            for(i=0;i<g[m].size();i++)
            {
                x.push_back(g[m][i].first);
                y.push_back(g[m][i].second);

            }

            ans+= solve(x)+solve(y);
        }
    }

    cout<<ans<<nl;

    get_lost_idiot;
}

