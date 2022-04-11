/***
 created: 2022-03-06-16.43.12
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
        ll n,m=0,i,j,k,l=0;


        cin>>n;


        ll a[n+4];

        for(i=0; i<n; i++)
        {
            cin>>a[i];
            m+=a[i];
        }


        sort(a,a+n);


        if(m==0) l=0;
        else
        {
            m-=a[n-1];
            if(m>=a[n-1] || abs(m-a[n-1])==1) l=1;
            else
            {
                l=abs(m-a[n-1]);
            }

        }


        cout<<l<<nl;

    }

    get_lost_idiot;
}

