#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)

vector<ll>parent,rankk;

vector<pair<ll,pair<ll,ll>>>edge;

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
        if(rand()%2)
        {
             swap(a,b);
        }
        parent[b]=a;

        /* else use this
        if (rankk[a] < rankk[b])
        {
            swap(a, b);
        }

        parent[b] = a;

        if (rankk[a] == rankk[b])
        {
            rankk[a]++;
        }
        */
    }
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n,m,i,j,k,l,c,d,e,f;

    while(cin>>n>>m && (n+m)!=0)
    {
        l=c=0;
        edge.clear();

        parent.resize(n);
        rankk.resize(n);

        make_set(n);

        for(i=0; i<m; i++)
        {
            cin>>d>>e>>f;
            l+=f;
            edge.push_back({f,{d,e}});
        }

        sort(edge.begin(),edge.end());


        for(auto dd:edge)
        {
            if(find_set(dd.second.second)!=find_set(dd.second.first))
            {
                c+=dd.first;
                union_sets(dd.second.first,dd.second.second);
            }
        }

        cout<<l-c<<endl;
    }




    return 0;
}
