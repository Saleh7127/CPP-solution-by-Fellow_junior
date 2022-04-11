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

        return;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll a,b;

    ll n,m,i,j,k=1,l;


    test
    {
        cin>>n>>m;

        for(i=0; i<n+4; i++)
        {
            parent[i]=i;
            siz[i]=1;
        }

        ans=INT_MIN;

        while(m--)
        {
            cin>>a>>b;

            unionn(a,b);
        }

        for(i=1;i<=n;i++)
        {
             ans=max(ans,siz[i]);
        }

        cout<<ans<<endl;

        parent.clear();
        siz.clear();

    }

    return 0;
}


