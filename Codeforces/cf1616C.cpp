/***
 created: 2021-12-30-23.09.33
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
        ll n,m,i,j,k,l=1000;

        cin>>n;

        ll a[n+4];

        for(i=0;i<n;i++) cin>>a[i];

        if(n==1 || n==2)
        {
             cout<<0<<nl;
        }
        else
        {
             for(i=0;i<n;i++)
             {
                  for(j=i+1;j<n;j++)
                  {
                       m=0;
                       for(k=0;k<n;k++)
                       {
                            if(((a[k]-a[i])*(j-i))!=((a[j]-a[i])*(k-i)))
                            {
                                 m++;
                            }
                       }

                       l=min(l,m);

                  }
             }

             cout<<l<<nl;
        }
   }



   get_lost_idiot;
}
