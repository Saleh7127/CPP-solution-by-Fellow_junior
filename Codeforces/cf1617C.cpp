/***
 created: 2022-03-15-12.34.40
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

        ll a[n+4];

        for(i=0;i<n;i++) cin>>a[i];

        set<ll>s;
        vector<ll>x,y;

        for(i=0;i<n;i++)
        {
            if(a[i]<=n && !s.count(a[i]))
            {
                s.insert(a[i]);
            }
            else x.push_back(a[i]);
        }

        sort(x.begin(),x.end());

        for(i=1;i<=n;i++)
        {
            if(!s.count(i))
            {
                y.push_back(i);
            }
        }


        l=0;

        for(i=0;i<y.size();i++)
        {
            if(2*y[i]>=x[i])
            {
                l=1;
                break;
            }
        }

        if(l) cout<<-1<<nl;
        else cout<<y.size()<<nl;
    }

    get_lost_idiot;
}
