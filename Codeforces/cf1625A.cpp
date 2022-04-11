/***
 created: 2022-01-13-21.49.33
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

        cin>>n>>l;

        ll a[n+41];

        for(i=0;i<n;i++) cin>>a[i];

        for(i=0;i<l;i++)
        {
             k=0;

             for(j=0;j<n;j++)
             {
                  if(a[j] & (1<<i)) k++;
             }
             if(k*2>=n) m+=(1<<i);
        }

        cout<<m<<nl;
   }


   get_lost_idiot;
}
