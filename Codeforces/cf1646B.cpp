/***
 created: 2022-03-05-23.51.13
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

        sort(a,a+n);


        i=0;

        m=k=0;

        i=2;

        k=a[0]+a[1];

        m=a[n-1];

        j=n-2;

        if(k<m)
        {
            cout<<"YES"<<nl;
            continue;
        }

        i=1,j=n-1;

        k=a[0];
        m=0;
        l=0;

        while(i<j)
        {

            k+=a[i];
            m+=a[j];
            i++;
            j--;

            if(m>k)
            {
                l=1;
                break;
            }

        }

        if(l) cout<<"YES"<<nl;
        else cout<<"NO"<<nl;
    }

    get_lost_idiot;
}
