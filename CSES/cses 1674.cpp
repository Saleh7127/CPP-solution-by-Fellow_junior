/***
 created: 2022-04-08-12.34.03
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'

vector<ll>g[200005];
ll ans[200005];

void dfs(ll in)
{
    ans[in]++;

    for(auto dd:g[in])
    {
        if(ans[dd]==0)
        {
            dfs(dd);
            ans[in]+=ans[dd];
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n,m,i,j,k,l;

    cin>>n;

    for(i=2;i<=n;i++)
    {
        cin>>k;
        g[k].push_back(i);
    }


    for(i=1;i<=n;i++)
    {
        if(ans[i]==0)
        {
            dfs(i);
        }
    }

    for(i=1;i<=n;i++)
    {
        cout<<ans[i]-1<<" ";
    }

    cout<<nl;

    get_lost_idiot;
}
