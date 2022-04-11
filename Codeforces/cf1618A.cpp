/***
 created: 2021-12-16-00.22.19
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
        ll n,m,i,j,k,l=0;

        cin>>n>>k;

        ll a[n+4];

        for(i=0;i<n;i++) cin>>a[i];

        sort(a,a+n,greater<ll>());

        for(i=0,j=0;j<k && i<n;i++,j++)
        {
             l+=a[i+k]/a[i];
             a[i]=0;
             a[i+k]=0;
        }

        for(i=0;i<n;i++) l+=a[i];

        cout<<l<<nl;
   }


   get_lost_idiot;
}
