#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)

vector<pair<ll,ll>>g[100005]; ///storing edges with weight;
ll path[100005]; ///one node comes from which node;
vector<ll>ans; ///store the shortest path;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n,m,i,j,k,l,a,b,c;

    cin>>n>>m;

    ll cost[n+5]; ///cost to reach from node to another node

    for(i=0; i<n+5; i++)
    {
        cost[i]=100000000000000;
    }

    while(m--)
    {
        cin>>a>>b>>c;
        g[a].push_back({b,c});
        g[b].push_back({a,c});
    }
    cost[1]=0;

    priority_queue<ll>q;
    q.push(1);

    while(q.empty()==false)
    {
        ll u=q.top();
        q.pop();

        for(auto i:g[u])
        {
            if(cost[i.first]> cost[u]+i.second)
            {
                ///relaxation;
                cost[i.first]=cost[u]+i.second;
                path[i.first]=u;
                q.push(i.first);
            }
        }

    }

    if(cost[n]==100000000000000) cout<<-1<<endl;
    else
    {
        while(path[n]!=0)
        {
            ///storing path
            ans.push_back(n);
            n=path[n];
        }

        ans.push_back(1);
        reverse(ans.begin(),ans.end());

        for(auto y:ans)
        {
            cout<<y<<" ";
        }
        cout<<endl;
    }

    return 0;
}
