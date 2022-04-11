/***
 created: 2021-11-14-20.30.42
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

        cin>>n>>m;


        if(n==1 || m==1)
        {
             if(n==1) swap(n,m);

             k=n/3;
             if(n%3) k++;

             cout<<k<<nl;

             continue;
        }

        k=(n/3)*m + (n%3)*(m/3) + min(n%3,m%3);

        l=(m/3)*n + (m%3)*(n/3) + min(n%3,m%3);

        cout<<min(k,l)<<nl;

    }


    get_lost_idiot;
}
