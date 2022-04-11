#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
vector<ll>g[100105];
vector<pair<ll,ll>>ans;
ll low[100105],in[100105],timer;
bool v[100105];

void dfs(ll node,ll p)
{
    v[node]=1;
    low[node]=in[node]=timer++;

    for(auto child:g[node])
    {
        if(child==p) continue;

        if(v[child])
        {
            low[node]=min(low[node],in[child]);
        }
        else
        {
            dfs(child,node);

            low[node]=min(low[node],low[child]);

            if(low[child]>in[node])
            {
                 cout<<node<<" "<<child<<endl;
                ans.push_back({min(node,child),max(node,child)});
            }
        }
    }
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll x,n,m,i,j,k,l;
    char cc;

    while(cin>>n)
    {
        ans.clear();

        for(i=0;i<n+5;i++)
        {
             g[i].clear();
             v[i]=0;
             low[i]=-1;
             in[i]=-1;
        }

        for(i=0; i<n; i++)
        {
            cin>>x;
            cin>>cc>>m>>cc;
            while(m--)
            {
                cin>>k;
                g[x].push_back(k);
            }

        }
        for(i=0; i<n; i++)
        {
            if(v[i]==0)
            {
                dfs(i,-1);
            }
        }

        sort(ans.begin(),ans.end());

        cout<<ans.size()<<" critical links"<<endl;
        for(auto dd:ans)
        {
            cout<<dd.first<<" - "<<dd.second<<endl;
        }
        cout<<endl;
    }


    return 0;
}
