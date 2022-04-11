#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)

vector<ll>g[200005];
ll a[200005];

ll n,m,x,ans=0,cat=0;

void dfs(ll in,ll par,ll cat)
{
    if(a[in]==1) cat++;
    else cat=0;

    if(cat>x)
    {
         cat=0;
         return;
    }

    if(g[in].size()==1 && in!=1) ans++;

    for(auto d:g[in])
    {
       if(d!=par) dfs(d,in,cat);
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll i,j,k,l;

    cin>>n>>x;

    for(i=1; i<=n; i++) cin>>a[i];

    for(i=0; i<n-1; i++)
    {
        cin>>j>>l;
        g[j].push_back(l);
        g[l].push_back(j);
    }

    ans=0;

    dfs(1,0,0);

    cout<<ans<<endl;

    return 0;
}
