/***
 created: 2021-11-05-11.30.59
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
map<string,ll>x;

void make_set(ll n)
{
    for(ll i=0; i<=n+2; i++)
    {
        parent[i] = i;
        rankk[i] = 0;
    }
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

ll dis(ll x,ll y,ll x1,ll y1)
{
     return (x-x1)*(x-x1)+(y-y1)*(y-y1);
}

int main()
{

    ll n,m,i,j,k,l;

    test
    {

        cin>>n;

        edge.clear();
        parent.resize(n+5);
        rankk.resize(n+5);
        make_set(n);

        vector<pair<ll,ll>>x;

        for(i=0;i<n;i++)
        {
            cin>>k>>l;

            x.push_back({k,l});
        }


        cin>>m;

        for(i=0;i<m;i++)
        {
             cin>>k>>l;

             union_sets(k,l);
        }


        for(i=0;i<n;i++)
        {
             for(j=i+1;j<n;j++)
             {
                  k=dis(x[i].first,x[i].second,x[j].first,x[j].second);

                  edge.push_back({k,{i+1,j+1}});
                  edge.push_back({k,{j+1,i+1}});
             }
        }

        sort(edge.begin(),edge.end());

        l=0;

        for(auto dd:edge)
        {
            if(find_set(dd.second.second)!=find_set(dd.second.first))
            {
                l=1;
                union_sets(dd.second.first,dd.second.second);

                cout<<dd.second.first<<" "<<dd.second.second<<nl;
            }
        }


        if(l==0) cout<<"No new highways need"<<nl;

        if(cs<tt) cout<<nl;

    }

    get_lost_idiot;
}
