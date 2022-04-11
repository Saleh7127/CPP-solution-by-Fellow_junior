/***
 created: 2022-01-03-22.51.58
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

    test
    {
        ll n,m,i,j,k,l;

        cin>>n;

        map<ll,ll>x;
        map<pair<ll,ll>,ll>y;
        ll a[n+4];

        m=INT_MAX;
        ll mx=INT_MIN;

        for(i=0; i<n; i++)
        {
            cin>>j>>k>>l;

            m=min(m,j);
            mx=max(mx,k);

            if(x[j]==0) x[j] =l;
            else x[j]=min(x[j],l);

            if(x[k]==0) x[k] = l;
            else x[k]=min(x[k],l);

            if(y[ {j,k}]==0) y[ {j,k}] = l;
            else y[ {j,k}]=min(y[ {j,k}],l);

            a[i]=x[m]+x[mx];

            if(y[ {m,mx}]) a[i]=min(a[i],y[ {m,mx}]);
        }

        for(ll i=0; i<n; i++)
        {
            cout<<a[i]<<nl;
        }
    }


    get_lost_idiot;
}

