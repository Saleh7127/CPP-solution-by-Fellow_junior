/***
 created: 2022-02-28-21.48.21
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
        ll n,m,i,j,k,l=0;

        cin>>n;
        ll a[n+4];

        for(i=0;i<n;i++)
        {
            cin>>a[i];
            l=max(l,a[i]);
        }

        set<ll>x;

        if(n<=2) cout<<0<<nl;
        else
        {
            for(i=1;i<n;i++)
            {
                x.insert(a[i]-a[i-1]);
            }

            if(x.size()==1) cout<<0<<nl;
            else if(x.size()>2) cout<<-1<<nl;
            else
            {
                m=0;
                for(auto d:x) m+=abs(d);

                if(m<=l) cout<<-1<<nl;
                else cout<<m<<" "<<(a[1]-a[0]+m)%m<<nl;
            }
        }

    }

    get_lost_idiot;
}

