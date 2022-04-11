/***
 created: 2022-02-17-16.51.49
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

        cin>>n;

        ll a[n+4];

        for(i=0;i<n;i++) cin>>a[i];
        k=a[n-1];
        for(i=n-2;i>=0;i--)
        {
             if(a[i]>k)
             {
                  k=a[i];
                  l++;
             }
        }

        cout<<l<<nl;
   }



   get_lost_idiot;
}
