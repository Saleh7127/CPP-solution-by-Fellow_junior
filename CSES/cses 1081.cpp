/***
 created: 2022-04-11-14.09.31
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'

ll x[1000005];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n,m,i,j,k,l;

    cin>>n;

    for(i=0; i<n; i++)
    {
        cin>>k;
        x[k]++;
    }

    for(i=1000000; i>=1; i--)
    {
        l=0;
        for(j=i; j<=1000000; j+=i)
        {
            if(x[j]) l+=x[j];
            if(l>=2)
            {
                cout<<i<<nl;
                return 0;
            }
        }
    }


    get_lost_idiot;
}

