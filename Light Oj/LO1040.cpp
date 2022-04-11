/***
 created: 2021-11-04-20.14.59
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'
vector<ll>parent,rankk;
vector<ll>g[20005];
vector<pair<ll,pair<ll,ll>>>edge;
bool v[20005];
ll cnt;

bool cmp(pair<ll,pair<ll,ll>>&a, pair<ll,pair<ll,ll>>&b)
{
    return a.first>=b.first;
}

void make_set(ll n)
{
    for(ll i=0; i<=n+2; i++)
    {
        parent[i] = i;
        rankk[i] = 0;
        v[i]=0;
        g[i].clear();
    }
}

ll dfs(ll in)
{
    v[in]=1;
    cnt++;
    for(auto d:g[in])
    {
        if(v[d]==0)
        {
            dfs(d);
        }
    }
    return cnt;
}

ll find_set(ll v)
{
    if (v == parent[v])
    {
        return v;
    }
    return parent[v] = find_set(parent[v]);
}

void union_sets(ll a, ll b)
{
    a = find_set(a);
    b = find_set(b);

    if (a != b)
    {
        if (rankk[a] < rankk[b])
        {
            swap(a, b);
        }

        parent[b] = a;

        if (rankk[a] == rankk[b])
        {
            rankk[a]++;
        }
    }
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n,i,j,k,l;

    test
    {
        cin>>n;

        l=cnt=0;

        edge.clear();
        parent.resize(n+5);
        rankk.resize(n+5);
        make_set(n);

        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                cin>>k;
                if(k!=0)
                {
                    l+=k;
                    edge.push_back({k,{i,j}});
                    g[i].push_back(j);
                    g[j].push_back(i);
                }
            }
        }

        cout<<"Case "<<cs<<": ";

        if(dfs(1ll)!=n) cout<<-1<<nl;
        else
        {
            sort(edge.begin(),edge.end());

            k=0;
            for(auto dd:edge)
            {
                if(find_set(dd.second.second)!=find_set(dd.second.first))
                {
                    l-=dd.first;
                    union_sets(dd.second.first,dd.second.second);
                }
            }
            cout<<l<<nl;
        }
    }

    get_lost_idiot;
}
