/***
 created: 2021-10-30-20.25.20
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

        for(i=0;i<n;i++)
        {
             cin>>a[i];
        }

        if(n%2==1)
        {
             for(i=1;i<n;i++)
             {
                  if(a[i]<=a[i-1])
                  {
                       l=1;
                       break;
                  }
             }
        }
        else l=1;

        if(l) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
   }


   get_lost_idiot;
}


