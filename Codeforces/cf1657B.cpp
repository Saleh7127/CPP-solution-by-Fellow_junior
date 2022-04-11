/***
 created: 2022-03-22-20.51.32
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
        ll n,m,i,j,k,l,b,x,y;

        cin>>n>>b>>x>>y;

        ll a[n+4];
        a[0]=0;


        for(i=1;i<=n;i++)
        {
            if(a[i-1]+x<=b)
            {
                a[i]=a[i-1]+x;
            }
            else
            {
                a[i]=a[i-1]-y;
            }
        }

        l=0;

        for(i=0;i<=n;i++) l+=a[i];

        cout<<l<<nl;

    }

    get_lost_idiot;
}

