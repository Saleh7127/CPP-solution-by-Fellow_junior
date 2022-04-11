/***
 created: 2022-03-07-02.44.25
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

    ll n,m=0,i,j,k,l=998244353;

    cin>>n;

    ll a[n+4];

    ll b[n+4];

    for(i=1;i<=n;i++)
    {
        cin>>a[i];
        a[i]=a[i]*i*(n-i+1);
    }

    for(i=1;i<=n;i++)
    {
        cin>>b[i];
    }


    sort(a+1,a+n+1);
    sort(b+1,b+n+1,greater<ll>());


    for(i=1;i<=n;i++)
    {
        m+=(a[i]%l*b[i]%l);
        m%=l;
    }

    cout<<m<<nl;

    get_lost_idiot;
}
