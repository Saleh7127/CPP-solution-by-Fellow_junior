/***
 created: 2022-04-10-22.50.25
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'
vector<ll>g[200005];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n,m,i,j,k,l,ans=0;


    cin>>n>>m;

    ll a[n+4];

    for(i=0;i<n;i++)
    {
        cin>>a[i];
        g[a[i]%m].push_back(i);
    }

    l=n/m;

    vector<pair<ll,ll>>x;

    for(i=0;i<2*m;i++)
    {
        k=i%m;

        while(g[k].size()>l)
        {
            x.push_back({g[k].back(),i});
            g[k].pop_back();
        }


        while(g[k].size()<l && x.empty()==false)
        {
            auto d=x.back();
            x.pop_back();


            g[k].push_back(d.first);

            a[d.first]+=(i-d.second);
            ans+=(i-d.second);
        }
    }


    cout<<ans<<nl;

    for(i=0;i<n;i++) cout<<a[i]<<" ";

    cout<<nl;

    get_lost_idiot;
}
