/***
 created: 2021-10-30-21.35.04
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

        for(i=0;i<min(n,30ll);i++)
        {
             l=0;
             for(j=2;j<=i+2;j++)
             {
                  if(a[i]%j)
                  {
                       l=1;
                       break;
                  }
             }
             if(l==0) break;
        }

        if(l) cout<<"YES"<<nl;
        else cout<<"NO"<<nl;
   }


   get_lost_idiot;
}

