#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)

map<ll,ll>parent;
map<ll,ll>siz;
map<ll,bool>frnd;
ll ans;

ll findset(ll v)
{
    if (v == parent[v])
    {
        return v;
    }
    return parent[v] = findset(parent[v]);
}

void unionn(ll a,ll b)
{
    a = findset(a);
    b = findset(b);

    if(a==b) return;

    else
    {
        if(siz[a]<siz[b]) swap(a,b);

        parent[b]=a;

        siz[a]+=siz[b];
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll a,b;

    ll n,m,i,j,k,l;

    while(cin>>n>>m && (n+m)>0)
    {
        for(i=0; i<n+4; i++)
        {
            parent[i]=i;
            siz[i]=1ll;
        }

        for(i=0; i<m; i++)
        {
            cin>>k>>l;
            k--;
            while(k--)
            {
                cin>>a;
                unionn(l,a);
            }
        }

        cout<<siz[findset(0)]<<endl;

        parent.clear();
        siz.clear();
    }

    return 0;
}
