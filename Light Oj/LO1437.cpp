/***
 created: 2022-03-16-20.28.51
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'

vector<ll>g[700];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);



    test
    {
        ll n,m,i,j,k,l,ans=INT_MAX;


        cin>>n>>m;

        for(i=0;i<m;i++)
        {
            cin>>j>>k;

            g[j].push_back(k);
            g[k].push_back(j);
        }

        for(i=0;i<n;i++)
        {
            vector<ll>dis(n+2,INT_MAX);
            vector<ll>par(n+2,-1);
            queue<ll>q;

            dis[i]=0;
            q.push(i);

            while(q.empty()==false)
            {
                ll u=q.front();
                q.pop();

                for(auto d:g[u])
                {
                    if(dis[d]==INT_MAX)
                    {
                        dis[d]=1+dis[u];
                        par[d]=u;
                        q.push(d);
                    }
                    else if(par[d]!=u && par[u]!=d)
                    {
                        ans=min(ans,dis[u]+dis[d]+1);
                    }
                }
            }
        }

        cout<<"Case "<<cs<<": ";

        if(ans==INT_MAX) cout<<"impossible"<<nl;
        else cout<<ans<<nl;

        for(i=0;i<n+2;i++) g[i].clear();

    }

    get_lost_idiot;
}

