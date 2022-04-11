/***
 created: 2022-03-08-20.40.52
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
        ll n,r,m=0,i,j=0,k=0,l;

        cin>>l>>r>>n;

        m=r/n + r%n;

        j=r/n;

        j=j*n-1;

        if(j>=l) k=j/n + j%n;

        cout<<max(k,m)<<nl;


    }

    get_lost_idiot;
}

