#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
ll a[205];
vector<ll>g[205];
bool v[205];
map<ll,string>x;
map<string,ll>y;
ll timer;
ll low[205],in[205];


void dfs(ll vertex,ll parent)
{
    v[vertex]=1;

    low[vertex] = in[vertex] = ++timer;

    ll edge=0;

    for(auto child:g[vertex])
    {
        if(child==parent) continue;

        if(v[child])
        {
            low[vertex]=min(low[vertex],in[child]);
        }
        else
        {
            dfs(child,vertex);

            if(low[child]>=in[vertex] && parent!=-1)
            {
                a[vertex]=1;
            }
            low[vertex]=min(low[vertex],low[child]);

            edge++;
        }
    }

    if(parent==-1 && edge>1)
    {
        a[vertex]=1;
    }
}


void clr(ll n)
{
    for(ll i=0; i<n+4; i++)
    {
        g[i].clear();
        v[i]=0;
        low[i]=-1;
        in[i]=-1;
        a[i]=0;
    }
    x.clear();
    y.clear();
    timer=0;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n,m,i,j,k,l,rr=1;
    string c,d;

    while(cin>>n && n)
    {
        clr(n);

        for(i=1; i<=n; i++)
        {
            cin>>c;
            x[i]=c;
            y[c]=i;
        }

        cin>>m;

        while(m--)
        {
            cin>>c>>d;
            l=y[c];
            k=y[d];
            g[l].push_back(k);
            g[k].push_back(l);
        }

        for(i=1; i<=n; i++)
        {
            if(v[i]==0)
            {
                dfs(i,-1);
            }
        }

        set<string>ans;

        for(i=1; i<=n; i++)
        {
            if(a[i]==1)
            {
                 ans.insert(x[i]);
            }
        }


        if(rr>1) cout<<endl;

        cout<<"City map #"<< rr++ <<": "<<ans.size()<<" camera(s) found"<<endl;

        for(auto ss:ans)
        {
            cout<<ss<<endl;
        }
    }


    return 0;
}
