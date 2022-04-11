/***
 created: 2022-03-27-22.00.00
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

        string a;

        cin>>n;

        if(n%2) cout<<0<<nl;
        else
        {
            n/=2;
            l=1;
            for(i=1;i<=n;i++)
            {
                l=l* i %998244353 ;
            }

            cout<<(l*l%998244353 )<<nl;
        }

    }

    get_lost_idiot;
}

