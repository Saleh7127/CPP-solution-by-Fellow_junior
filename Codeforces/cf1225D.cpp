/***
 created: 2022-04-11-16.43.27
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'

map<vector<pair<ll,ll>>,ll>x;
vector<pair<ll,ll>>p[100005];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n,m,i,j,k,l,ans=0;

    cin>>n>>k;

    for(i=0;i<n;i++)
    {
        cin>>m;

        for(j=2;j*j<=m;j++)
        {
            if(m%j==0)
            {
                l=0;
                while(m%j==0)
                {
                    l++;
                    m/=j;
                }
                if(l%k)
                {
                    p[i].push_back({j,l%k});
                }
            }
        }

        if(m>1)
        {
            p[i].push_back({m,1});
        }

        x[p[i]]++;
    }

    for(i=0;i<n;i++)
    {
        vector<pair<ll,ll>>y;

        for(auto d:p[i])
        {
             y.push_back({d.first,k-d.second});
        }

        ans+=x[y];

        if(y==p[i]) ans--;
    }

    cout<<ans/2<<nl;

    get_lost_idiot;
}
