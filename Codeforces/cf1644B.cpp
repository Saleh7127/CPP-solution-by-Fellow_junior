/***
 created: 2022-02-22-20.42.02
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
        ll n,m,i,j,k,l;


        cin>>n;

        ll a[n+4];

        for(i=n; i>=1; i--)
        {
            a[i]=n-i+1;
        }

        for(i=1; i<=n; i++)
        {
            cout<<a[i]<<" ";
        }

        cout<<nl;
        k=n,l=n-1;

        for(j=0; j<n-1; j++)
        {
            swap(a[k],a[l]);

            k--;
            l--;

            for(i=1; i<=n; i++)
            {
                cout<<a[i]<<" ";
            }
            cout<<nl;
        }
    }


    get_lost_idiot;
}

