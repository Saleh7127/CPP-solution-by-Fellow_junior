/***
 created: 2021-11-04-19.21.47
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'

vector<ll>parent,rankk;

vector<pair<ll,pair<ll,ll>>>edge;

bool cmp(pair<ll,pair<ll,ll>>&a, pair<ll,pair<ll,ll>>&b)
{
    return a.first>=b.first;
}

void make_set(ll n)
{
    for(ll i=0; i<n; i++)
    {
        parent[i] = i;
        rankk[i] = 0;
    }
}

int find_set(ll v)
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

    ll n,i,j,k,l,c,d,e,f;

    test
    {
        cin>>n;

        n++;

        l=c=0;

        edge.clear();
        parent.resize(n);
        rankk.resize(n);
        make_set(n);

        while(1)
        {
            cin>>d>>e>>f;

            if(d+e+f==0) break;

            edge.push_back({f,{d,e}});
        }

        sort(edge.begin(),edge.end());


        for(auto dd:edge)
        {
            if(find_set(dd.second.second)!=find_set(dd.second.first))
            {
                l+=dd.first;
                union_sets(dd.second.first,dd.second.second);
            }
        }

        sort(edge.begin(),edge.end(),cmp);

        parent.resize(n);
        rankk.resize(n);
        make_set(n);


        for(auto dd:edge)
        {
            if(find_set(dd.second.second)!=find_set(dd.second.first))
            {
                l+=dd.first;
                union_sets(dd.second.first,dd.second.second);
            }
        }

        cout<<"Case "<<cs<<": ";

        if(l%2==0) cout<<l/2<<nl;
        else cout<<l<<"/"<<2<<nl;
    }

    get_lost_idiot;
}

