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


int main()
{

    ll n,m,i,j,k,l;

    string a,b;

    test
    {
        edge.clear();
        parent.resize(1009);
        rankk.resize(1009);
        make_set(1000);
        x.clear();
        m=1;

        cin>>n;

        for(i=0;i<n;i++)
        {
            cin>>a>>b>>k;

            if(x[a]==0)
            {
                x[a]=m;
                m++;
            }

            if(x[b]==0)
            {
                x[b]=m;
                m++;
            }

            if(k==0) union_sets(x[a],x[b]);

            else edge.push_back({k,{x[a],x[b]}});
        }

        sort(edge.begin(),edge.end());

        l=0;

        for(auto dd:edge)
        {
            if(find_set(dd.second.second)!=find_set(dd.second.first))
            {
                l+=dd.first;
                union_sets(dd.second.first,dd.second.second);
            }
        }

        set<ll>prnt;

        for(i=1;i<m;i++)
        {
             prnt.insert(find_set(i));
        }

        cout<<"Case "<<cs<<": ";

        if(prnt.size()>1) cout<<"Impossible"<<nl;
        else cout<<l<<nl;

    }

    get_lost_idiot;
}

