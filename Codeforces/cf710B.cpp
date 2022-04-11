/***
 created: 2022-03-29-22.58.01
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

    ll n,m=0,i,j,k,l=0;

    cin>>n;

    ll a[n+1];

    for(i=0; i<n; i++) cin>>a[i];


    sort(a,a+n);


    if(n%2)
    {
        cout<<a[n/2]<<nl;
    }
    else
    {
        for(i=0; i<n; i++)
        {
            l+=abs(a[i]-a[n/2]);
        }
        for(i=0; i<n; i++)
        {
            m+=abs(a[i]-a[n/2 - 1]);
        }

        if(l>=m) cout<<a[n/2 - 1]<<nl;
        else cout<<a[n/2]<<nl;
    }

    get_lost_idiot;
}
