/***
 created: 2022-03-15-21.53.42
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'
vector<ll>g[1000005];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    ll n,q;

    while(cin>>n>>q)
    {
        ll m,i,j,k,l;

        for(i=1; i<=n; i++)
        {
            cin>>j;

            g[j].push_back(i);
        }


        while(q--)
        {
            cin>>k>>l;

            if(g[l].size()==0 || k>g[l].size())
            {
                cout<<0<<nl;
            }
            else
            {
                cout<<g[l][k-1]<<nl;
            }
        }
    }


    get_lost_idiot;
}

