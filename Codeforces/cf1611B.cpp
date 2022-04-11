/***
 created: 2021-11-25-20.44.10
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
   cin.tie(0);cout.tie(0);


   test
   {
        ll n,m,i,j,l,k;

        cin>>n>>m;

        if(n==0 || m==0) cout<<0<<nl;
        else
        {
             k=(n+m)/4;
             j=min({n,m,k});

             cout<<j<<nl;
        }
   }


   get_lost_idiot;
}

