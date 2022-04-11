#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
vector<pair<ll,ll>>g[100000];
ll dis[100000];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    test
    {
        ll n,m,i,j,k,l,a,b,c,d;
        cin>>n>>m>>k>>d;
        for(i=0; i<n+m+5; i++)
        {
            g[i].clear();
            dis[i]=10000000000;
        }
        for(i=0; i<m; i++)
        {
            cin>>a>>b>>c;
            g[a].push_back({b,c});
        }
        for(i=0; i<k; i++)
        {
            cin>>a>>b>>c;
            g[a].push_back({b,c});
        }
        dis[0]=0;
        priority_queue<ll>q;
        q.push(0);

        while(q.empty()==false)
        {
            ll u=q.top();
            q.pop();

            for(auto x:g[u])
            {
                if(dis[x.first]>dis[u]+x.second)
                {
                    dis[x.first]=dis[u]+x.second;
                    q.push(x.first);
                }
            }
        }
        ll mi=10000000000;
        cout<<"Case "<<cs<<": ";
        for(i=0;i<=d;i++)
        {
            mi=min(mi,dis[i]);
        }
        if(mi==10000000000) cout<<"Impossible"<<endl;
        else cout<<dis[n-1]<<endl;

    }
    return 0;
}

