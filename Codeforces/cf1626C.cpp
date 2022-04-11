/***
 created: 2022-01-16-23.36.18
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
        ll n,m=0,i,j,l,ans=0;

        cin>>n;

        ll h[n+4],k[n+4];

        for(i=0; i<n; i++) cin>>k[i];

        for(i=0; i<n; i++) cin>>h[i];

        vector<pair<ll,ll>>x;

        for(i=0; i<n; i++)
        {
            j=k[i];
            l=j-h[i]+1;
            x.push_back({l,j});
        }

        sort(x.begin(),x.end());

        j=1,l=0;

        for(auto[cj,cl]:x)
        {
            if(cj>l)
            {
                ll d=(l-j+1);

                ans+=(d*(d+1))/2;

                j=cj;
                l=cl;
            }
            else
            {
                l=max(l,cl);
            }
        }

        ll d=(l-j+1);

        ans+=(d*(d+1))/2;

        cout<<ans<<nl;

    }

    get_lost_idiot;
}

