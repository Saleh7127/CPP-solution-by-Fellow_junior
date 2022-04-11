/***
 created: 2022-03-01-23.36.20
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'

vector<pair<ll,ll>>g[200005];

ll n;

bool connected(ll mask)
{
    bool v[n+4]= {0};

    queue<ll>q;

    q.push(1);
    v[1]=1;

    ll sz=1;

    while(q.empty()==false)
    {
        ll u=q.front();
        q.pop();

        for(auto d:g[u])
        {
            if((d.second&mask) || v[d.first]);
            else
            {
                v[d.first]=1;
                sz++;
                q.push(d.first);
            }
        }
    }

    return sz==n;
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    test
    {
        ll m,i,j,k,l;

        cin>>n>>m;

        for(i=0; i<m; i++)
        {
            cin>>j>>k>>l;
            g[j].push_back({k,l});
            g[k].push_back({j,l});
        }

        ll ans=0;
        l=0;

        for(i=32;i>=0;i--)
        {
            l+=(1ll<<i);

            if(connected(l)==0)
            {
                l-=(1ll<<i);
                ans+=(1ll<<i);
            }
        }

        cout<<ans<<nl;

        for(i=0;i<n+2;i++) g[i].clear();
    }

    get_lost_idiot;
}
