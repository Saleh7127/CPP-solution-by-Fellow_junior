/***
 created: 2022-03-06-14.04.21
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

        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }

        k=j=0;

        for(i=0; i<n; i++)
        {
            if(a[i]==0)
            {
                j=i-1;
                break;
            }
        }

        for(i=n-1; i>=0; i--)
        {
            if(a[i]==0)
            {
                k=i+1;
                break;
            }
        }

        cout<<k-j<<nl;
    }


    get_lost_idiot;
}

