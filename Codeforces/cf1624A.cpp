/***
 created: 2022-01-10-20.28.22
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
        ll n,m,i,j,k,l;

        cin>>n;

        ll a[n+4];

        for(i=0;i<n;i++) cin>>a[i];

        sort(a,a+n);

        if(n==1) cout<<0<<nl;
        else if(a[0]==a[n-1]) cout<<0<<nl;
        else
        {
             cout<<(a[n-1]-a[0])<<nl;
        }

   }



   get_lost_idiot;
}
