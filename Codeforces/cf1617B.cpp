/***
 created: 2022-03-14-22.19.55
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


        if(n%2==1)
        {
            n--;

            if((n/2)%2==0)
            {
                j=n/2 - 1 ;
                k=n/2 +1;
            }
            else
            {
                j=n/2 - 2 ;
                k=n/2 + 2;
            }

            cout<<j<<" "<<k<<" "<<1<<nl;
        }
        else
        {
            j=n/2 - 2;
            k=n/2;

            if(__gcd(j,k)!=2)
            {
                cout<<n/2 - 1 <<" "<<n/2<<" "<<1<<nl;
            }

            else cout<<n/2 - 2 <<" "<<n/2<<" "<<2<<nl;
        }
    }

    get_lost_idiot;
}
