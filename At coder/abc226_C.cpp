/***
 created: 2021-11-07-18.41.46
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'

vector<ll>g[200005];
bool v[200005];
ll l=0;
ll c[200005];

void dfs(ll in)
{
     l+=c[in];

     for(auto dd:g[in])
     {
          if(v[dd]==0)
          {
               v[dd]=1;
               dfs(dd);
          }
     }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n,m,i,j,k;


    cin>>n;


    for(i=1; i<=n; i++)
    {
        cin>>c[i];

        cin>>k;

        for(j=0;j<k;j++)
        {
            cin>>m;
            g[i].push_back(m);
        }
    }


    l=0;

    v[n]=1;

    dfs(n);

    cout<<l<<nl;


    get_lost_idiot;
}

