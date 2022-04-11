/***
 created: 2022-02-20-20.36.12
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

        for(i=0; i<n; i++) cin>>a[i];


        if(n==2)
        {
            cout<<0<<nl;
            for(i=0; i<n; i++)
            {
                cout<<a[i]<<" ";
            }
            cout<<nl;
            continue;
        }

        for(i=n-2; i>=1; i--)
        {
            if(a[i]>a[i-1] && a[i]>a[i+1])
            {
                l++;
                if(i-2>=0 && a[i-2]>=a[i])
                {
                    a[i-1]=a[i-2];
                }
                else
                {
                    a[i-1]=a[i];
                }
            }
        }

        cout<<l<<nl;
        for(i=0; i<n; i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<nl;
    }



    get_lost_idiot;
}

