#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)

ll d1[10000],d2[10000];
vector<ll>g[10000];
bool v[10000];

void bfs(ll x,ll d[])
{
    queue<ll>q;
    q.push(x);
    v[x]=1;
    d[x]=0;
    while(q.empty()==false)
    {
        ll u=q.front();
        q.pop();
        for(auto i:g[u])
        {
            if(v[i]==0)
            {
                d[i]=d[u]+1;
                v[i]=1;
                q.push(i);
            }
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
        ll s,d,n,m,i,j,k,l,a,b;
        cin>>n>>m;
        for(i=0; i<m; i++)
        {
            cin>>a>>b;
            g[a].push_back(b);
            g[b].push_back(a);
        }
        cin>>a>>b;

        bfs(a,d1);

        memset(v,0,sizeof(v));

        bfs(b,d2);

        l=0;

        for(i=0; i<n; i++)
        {
            l=max(l,(d1[i]+d2[i]));
        }
        cout<<"Case "<<cs<<": "<<l<<endl;

        for(i=0; i<n+5; i++)
        {
            g[i].clear();
            v[i]=0;
            d1[i]=0;
            d2[i]=0;
        }

    }


    return 0;
}
