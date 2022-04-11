#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)

vector<ll>a[100005];
ll ans=0,c[100005];

ll dfs(ll in)
{
    if(c[in]==2)
    {
        return in;
    }
    else
    {
        c[in]++;
        for(auto i: a[in])
        {
            return dfs(i);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n,m,i,j,k,l;

    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>m;
        a[i].push_back(m);
    }
    for(i=1; i<=n; i++)
    {
        cout<<dfs(i)<<" ";
        memset(c,0,sizeof(c));
    }
    return 0;
}
