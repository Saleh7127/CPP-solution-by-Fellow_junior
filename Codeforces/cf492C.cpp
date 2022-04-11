/***
 created: 2022-03-28-23.24.53
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    ll n,m,i,j,k,l=0,r,avg;


    cin>>n>>r>>avg;


    vector<pair<ll,ll>>a;

    for(i=0;i<n;i++)
    {
        cin>>j>>k;
        l+=j;
        a.push_back({k,j});
    }

    if((l/n)>=avg)
    {
        cout<<0<<nl;
        return 0;
    }

    m=(n*avg)-l;

    sort(a.begin(),a.end());

    ll ans=0;

    for(auto d:a)
    {
        k=d.second;

        if(k<r && m)
        {
            i=r-k;

            if(i<=m)
            {
                ans+=(d.first*i);
                m-=i;
            }
            else
            {
                ans+=(d.first*m);
                m=0;
            }
        }
    }


    cout<<ans<<nl;

    get_lost_idiot;
}

