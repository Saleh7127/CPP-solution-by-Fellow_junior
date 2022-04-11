#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)

vector<ll>adj[100005];
ll seen[100005];
vector<ll>ans;
ll n,m;

void bfs()
{
    queue<ll>qu;
    qu.push(1);
    seen[1]=1;
    while(!qu.empty())
    {
        ll x = qu.front();
        qu.pop();
        for(auto i : adj[x])
        {
            if(!seen[i])
            {
                seen[i]=1;
                ans[i]=x;
                qu.push(i);
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll i,k,a,b;

    cin>>n>>m;


	ans.resize(n+1);

    for(i = 0; i<=n;i++)
    {
        ans[i] = -1;
    }
    for(i=0; i<m; i++)
    {
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    bfs();

    if(ans[n]==-1)
    {
        cout<<"IMPOSSIBLE"<<endl;
    }

    k=n;
    vector<ll>ss;
    while(k!= -1)
    {
        ss.push_back(k);
        k = ans[k];
    }

    cout << ss.size() << endl;
    reverse(ss.begin(),ss.end());
    for(i=0;i<ss.size();i++)
    {
        if(i==0) cout<<ss[i];
        else cout<<" "<<ss[i];
    }
    cout<<endl;
    return 0;
}
