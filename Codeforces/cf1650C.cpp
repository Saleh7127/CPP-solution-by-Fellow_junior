/***
 created: 2022-03-08-21.06.34
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'

bool cmp(pair<ll,ll>a,pair<ll,ll>b)
{
    if(a.second==b.second)
    {
        return a.first<=b.first;
    }
    return a.second<b.second;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    test
    {
        ll n,m,i,j,k,l=0;


        cin>>n>>m;
        n*=2;
        vector<pair<ll,ll>>x,y;
        map<ll,ll>xx;


        for(i=0; i<m; i++)
        {
            cin>>j>>k;
            xx[j]=i+1;
            x.push_back({k,j});

        }

        sort(x.begin(),x.end());

        for(i=0; i<n; i++)
        {
            y.push_back({x[i].second,x[i].first});
            l+=x[i].first;
        }

        // sort(x.begin(),x.end(),cmp);

        sort(y.begin(),y.end());

        cout<<l<<nl;

        for(i=0,j=n-1; i<(n/2); i++,j--)
        {
            cout<<xx[y[i].first]<<" "<<xx[y[j].first]<<nl;
        }
    }

    get_lost_idiot;
}

