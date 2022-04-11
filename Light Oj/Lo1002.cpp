#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
vector<pair<ll,ll>>g[100005];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    test
    {

        ll n,m,i,j,k,l,a,b,c;

        cin>>n>>m;

        ll cost[n+5];

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

        cin>>k;

        cost[k]=0;

        priority_queue<ll>q;

        q.push(k);

        while(q.empty()==false)
        {
            ll u=q.top();
            q.pop();

            for(auto i:g[u])
            {
                if(cost[i.first]> max(cost[u],i.second))
                {
                    ///relaxation;
                    cost[i.first]= max(cost[u],i.second);
                    q.push(i.first);
                }
            }

        }

        cout<<"Case "<<cs<<":"<<endl;

        for(i=0; i<n; i++)
        {
            if(cost[i]==100000000000000) cout<<"Impossible"<<endl;
            else cout<<cost[i]<<endl;
            g[i].clear();
            cost[i]=100000000000000;
        }


    }
    return 0;
}


