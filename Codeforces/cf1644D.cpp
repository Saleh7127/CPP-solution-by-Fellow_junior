/***
 created: 2022-02-23-15.02.29
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'

ll bigmod(ll a,ll c,ll d)
{
    if(c==0) return 1LL;
    ll x=bigmod(a,c/2,d);
    x=(x*x)%d;
    if(c%2==1LL)
    {
        x=(x*a)%d;
    }
    return x;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    test
    {
        ll n,m,a,b,i,j,k,l=1,q;

        cin>>n>>m>>k>>q;

        deque<pair<ll,ll>>x;

        for(i=0; i<q; i++)
        {
            cin>>a>>b;
            x.push_front({a,b});
        }


        set<ll>r,c;

        for(i=0; i<q; i++)
        {

            if(r.count(x[i].first) && c.count(x[i].second)) continue;

            l*=k;
            l%=998244353;
            r.insert(x[i].first);
            c.insert(x[i].second);

            if(r.size() == n || c.size() == m) break;

        }

        cout<<l<<nl;

    }

    get_lost_idiot;
}
