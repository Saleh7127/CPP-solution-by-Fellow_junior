/***
 created: 2022-03-22-15.51.34
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

        for(i=0;i<n;i++) cin>>a[i];

        for(i=0;i<n-1;i++)
        {
            for(j=i+1;j<n;j++)
            {
                l=max(l,a[i]+a[j]);
            }
        }


        cout<<l<<nl;
    }

    get_lost_idiot;
}
