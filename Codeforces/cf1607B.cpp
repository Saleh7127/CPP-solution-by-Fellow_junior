/***
 created: 2021-11-03-18.16.21
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
        ll x,n,i,j,k,l=0,r;

        cin>>x>>n;

        if(n%4==0) cout<<x<<nl;
        else
        {
            if(n%4==1) r=n;
            if(n%4==2) r=-1;
            if(n%4==3) r=-1*(++n);

            if(x%2) cout<<x+r<<nl;
            else cout<<x+(-r)<<nl;
        }
    }


    get_lost_idiot;
}
