/***
 created: 2022-02-09-13.03.32
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
        ll n,m=0,i,j,k,l;

        cin>>n>>k>>l;

        for(i=0;i<n;i++)
        {
             cin>>j;
             m+=j;
        }

        if(m%2==abs(k-l)%2) cout<<"Alice"<<nl;
        else cout<<"Bob"<<nl;
   }


   get_lost_idiot;
}
