/***
 created: 2022-02-20-21.31.20
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
        ll n,m,i,j,k=0,l;

        cin>>n;

        ll a[n+4];

        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }


        for(i=0; i<n-1; i++)
        {
            if(a[i]>a[i+1])
            {
                k=1;
                break;
            }
        }

        if(k==0)
        {
            cout<<0<<nl;
            continue;
        }

        if(a[n-2]>a[n-1])
        {
            cout<<-1<<nl;
            continue;
        }

        else
        {
            if(a[n-1]>=0)
            {
                cout<<n-2<<nl;

                for(i=0; i<n-2; i++)
                {
                    cout<<i+1<<" "<<n-1<<" "<<n<<nl;
                }
            }
            else cout<<-1<<nl;
        }
    }


    get_lost_idiot;
}

