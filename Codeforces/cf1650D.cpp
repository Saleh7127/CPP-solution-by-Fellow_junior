/***
 created: 2022-03-09-23.03.35
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

        vector<ll>a(n);

        ll b[n+4];

        for(i=0;i<n;i++) cin>>a[i];

        for(i=n;i>=1;i--)
        {
            auto d=find(a.begin(),a.end(),i);

            b[i-1]=(d-a.begin()+1)%i;

            rotate(a.begin(),d,a.end());

            a.erase(a.begin());
        }

        for(i=0;i<n;i++) cout<<b[i]<<" ";

        cout<<nl;
    }

    get_lost_idiot;
}

