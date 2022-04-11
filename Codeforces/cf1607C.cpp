/***
 created: 2021-11-02-21.01.40
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

        for(i=0;i<n;i++)
        {
             cin>>a[i];
        }

        sort(a,a+n);

        l=m=a[0];

        for(i=1;i<n;i++)
        {
             a[i]=a[i]-l;
             l+=a[i];
             m=max(m,a[i]);
        }

        cout<<m<<nl;
   }

   get_lost_idiot;
}

