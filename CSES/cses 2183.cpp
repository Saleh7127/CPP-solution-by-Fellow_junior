/***
 created: 2022-04-06-23.54.17
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

    ll n,m,i,j,k,l;


    cin>>n;

    ll a[n+4];

    for(i=0;i<n;i++) cin>>a[i];

    sort(a,a+n);

    k=0,l=1;

    for(i=0;i<n;i++)
    {
        if(l<a[i])
        {
            cout<<l<<nl;
            return 0;
        }
        l+=a[i];
    }

    cout<<l<<nl;

    get_lost_idiot;
}

