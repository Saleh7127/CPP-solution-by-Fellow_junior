/***
 created: 2022-04-06-14.20.22
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

    ll n,m,i,j,k,l=1e17;

    cin>>n;

    ll a[n+4];

    for(i=0; i<n; i++) cin>>a[i];

    ll lo=1,hi=1e15;


    sort(a,a+n);


    if(n%2)
    {
        l=0;
        k=0;

        for(i=0; i<n; i++)
        {
            l+=abs(a[i]-a[n/2]);
        }
        cout<<l<<nl;

    }

    else
    {
        l=0;
        k=0;

        for(i=0; i<n; i++)
        {
            l+=abs(a[i]-a[n/2]);
        }

        for(i=0; i<n; i++)
        {
            k+=abs(a[i]-a[n/2 - 1]);
        }

        cout<<min(k,l)<<nl;

    }




   // cout<<l<<nl;

    get_lost_idiot;
}
