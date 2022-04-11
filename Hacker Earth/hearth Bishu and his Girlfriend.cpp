#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
vector<ll>g[100000];
ll v[100005];
ll ans[100000];
void dfs(ll x)
{
    v[x]=1;
    for(auto i: g[x])
    {
        if(v[i]==0)
        {
            ans[i]=ans[x]+1;
            dfs(i);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    ll n,m,d,i,j,l;

    cin>>n;
    n--;
    while(n--)
    {
        cin>>i>>j;
        g[i].push_back(j);
        g[j].push_back(i);
    }
    ans[1]=0;
    dfs(1);
    l=10000000;
    j=10000000;
    cin>>m;
    while(m--)
    {
        cin>>d;
        if(ans[d]<l)
        {
            l=ans[d];
            j=d;
        }
        else if(ans[d]==l)
        {
            if(d<j)
            {
                j=d;
            }
        }
    }
    cout<<j<<endl;
    return 0;
}
