/***
 created: 2022-01-17-16.33.33
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
        ll a[4],i,l=0;

        cin>>a[0]>>a[1]>>a[2];

        sort(a,a+3);

        if(a[0]+a[1]==a[2]) l=1;
        else if(a[0]==a[1] && a[2]%2==0) l=1;
        else if(a[2]==a[1] && a[0]%2==0) l=1;



        if(l) cout<<"YES"<<nl;
        else cout<<"NO"<<nl;
    }


    get_lost_idiot;
}

