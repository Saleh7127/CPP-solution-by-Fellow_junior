/***
 created: 2022-03-29-22.31.21
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


    ll n,m,i,j,k,l,q;

    cin>>n>>q;

    ll a[n+5],b[n+4]={0};


    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(i=0;i<q;i++)
    {
        cin>>j>>k;
        b[--j]+=1;
        b[k]-=1;
    }

    for(i=1;i<n;i++) b[i]+=b[i-1];


    sort(a,a+n);
    sort(b,b+n);


    l=0;

    for(i=0;i<n;i++)
    {
        l+=a[i]*b[i];
    }

    cout<<l<<nl;

    get_lost_idiot;
}
