/***
 created: 2022-02-19-02.13.46
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

        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }

        k=l=j=0;

        for(i=1; i<n-1; i++)
        {
            if(a[i]%2)
            {
                 l+=a[i];
                 j++;
            }
            else k+=a[i];
        }
        if((n==3 && a[1]%2) || (l==n-2 && !k)) cout<<-1<<nl;
        else
        {
            l=0;
            for(i=1; i<n-1; i++)
            {
                l+=(a[i]+1)/2;
            }
            cout<<l<<nl;
        }
    }

    get_lost_idiot;
}
