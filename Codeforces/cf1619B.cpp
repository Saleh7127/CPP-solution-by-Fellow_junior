/***
 created: 2022-03-10-13.40.36
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


        set<ll>x;


        for(i=1;i*i<=n;i++)
        {
            x.insert(i*i);
        }

        for(i=1;i*i*i<=n;i++)
        {
            x.insert(i*i*i);
        }

        cout<<x.size()<<nl;
    }

    get_lost_idiot;
}

