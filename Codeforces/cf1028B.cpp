/***
 created: 2022-03-31-14.23.52
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'

ll sumd(ll n)
{
    ll x=0;

    while(n)
    {
        x+=(n%10);
        n/=10;
    }
    return x;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n,m,i,j,k,l;


    cin>>n>>m;

    for(i=0;i<n;i++)
    {
        cout<<1;
    }
    cout<<nl;
    for(i=0;i<n-1;i++)
    {
        cout<<8;
    }
    cout<<9<<nl;


    get_lost_idiot;
}
