/***
 created: 2022-04-08-13.54.44
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'

vector<ll>g[200005];
bool v[200005];
ll ans=0,cc=0,node;

void dfs(ll c,ll p,ll d)
{
    for(auto dd:g[c])
    {
        if(dd!=p)
        {
            dfs(dd,c,d+1);
        }
    }
    if(d>ans)
    {
        ans=d;
        node=c;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n,m,i,j,k,l;

    cin>>n;

    for(i=0;i<n-1;i++)
    {
        cin>>j>>k;

        g[j].push_back(k);
        g[k].push_back(j);
    }


    dfs(1,0,0);

    cc=0;

    dfs(node,0,0);

    cout<<ans<<nl;

    get_lost_idiot;
}
