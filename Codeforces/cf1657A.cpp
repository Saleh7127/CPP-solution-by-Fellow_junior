/***
 created: 2022-03-22-20.51.32
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


        cin>>n>>m;

        l=n*n+m*m;

        k=sqrt(l);


        if(n+m==0) i=0;
        else if(k*k==l) i=1;
        else i=2;

        cout<<i<<nl;
    }

    get_lost_idiot;
}

