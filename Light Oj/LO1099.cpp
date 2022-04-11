/***
 created: 2022-03-17-15.27.40
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'
vector<pair<ll,ll>>g[50000];

ll dis[5015],cst[5010];


void clr(ll n)
{
    for(ll i=0;i<n;i++)
    {
        g[i].clear();
        cst[i]=dis[i]=INT_MAX;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    test
    {
        ll n,m,i,j,k,l;

        cin>>n>>m;

        clr(n+5);

        priority_queue<pair<ll,ll>>q;


        for(i=0;i<m;i++)
        {
            cin>>j>>k>>l;
            g[j].push_back({k,l});
            g[k].push_back({j,l});
        }

        q.push({0,1});
        cst[1]=0;


        while(q.empty()==false)
        {
            auto d=q.top();
            q.pop();

            if(dis[d.second]<(-1*d.first)) continue;

            for(auto x:g[d.second])
            {
                ll u= x.first;

                ll val= x.second + (-1*d.first);

                if(val<cst[u])
                {
                    swap(cst[u],val);
                    q.push({-cst[u],u});
                }

                if(val<dis[u] && val!=cst[u])
                {
                    dis[u]=val;
                    q.push({-dis[u],u});
                }
            }

        }

        cout<<"Case "<<cs<<": "<<dis[n]<<nl;
    }

    get_lost_idiot;
}

