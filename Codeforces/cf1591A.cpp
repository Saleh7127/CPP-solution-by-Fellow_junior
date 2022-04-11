/***
 created: 2022-02-17-16.59.40
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
        ll n,m,i,j,k,l=1;

        cin>>n;

        ll a[n+4];

        for(i=0;i<n;i++) cin>>a[i];

        for(i=0;i<n;i++)
        {
             if(a[i])
             {
                  if(i-1>=0 && a[i-1]) l+=5;
                  else l++;
             }
             else
             {
                  if(i-1>=0 && a[i-1]==0)
                  {
                       l=-1;
                       break;
                  }
             }
        }

        cout<<l<<nl;

   }



   get_lost_idiot;
}
