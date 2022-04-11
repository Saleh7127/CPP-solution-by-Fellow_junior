/***
 created: 2021-11-05-23.00.33
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'

vector<ll>parent,rankk;
vector<pair<ll,pair<ll,ll>>>edge;


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
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n,m,c,i,j,k,l;

    test
    {
        cin>>n>>m>>c;

        edge.clear();
        parent.resize(n+5);
        rankk.resize(n+5);
        make_set(n);

        for(i=0;i<m;i++)
        {
             cin>>j>>k>>l;

             if(l>=c) continue;

             edge.push_back({l,{j,k}});
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

        set<ll>airport;

        for(i=1;i<=n;i++)
        {
             airport.insert(find_set(i));
        }

        l=l+ (airport.size())*c;

        cout<<"Case "<<cs<<": "<<l<<" "<<airport.size()<<nl;

    }

    get_lost_idiot;
}
