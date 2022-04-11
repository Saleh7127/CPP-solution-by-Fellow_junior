/***
 created: 2022-01-27-20.41.31
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

        ll a[n+4],b[n+4];

        for(i=0; i<n; i++) cin>>a[i];
        for(i=0; i<n; i++) cin>>b[i];

        for(i=0; i<n; i++)
        {
             if(a[i]<b[i]) swap(a[i],b[i]);
        }

        sort(a,a+n),sort(b,b+n);

        l=a[n-1]*b[n-1];

        cout<<l<<nl;
    }


    get_lost_idiot;
}

