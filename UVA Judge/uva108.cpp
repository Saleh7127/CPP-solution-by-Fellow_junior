/***
 created: 2021-12-04-09.26.35
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



   ll n,m,i,j,k,l=INT_MIN;


   cin>>n;

   ll a[n+4][n+4];

   for(i=0;i<n;i++)
   {
        for(j=0;j<n;j++)
        {
             cin>>a[i][j];
        }
   }

   for(i=0;i<n;i++)
   {

        ll sum[n+4]={0};

        for(j=i;j<n;j++)
        {
             for(k=0;k<n;k++)
             {
                  sum[k]+=a[j][k];
             }

             m=0;

             for(k=0;k<n;k++)
             {
                  m+=sum[k];
                  l=max(l,m);
                  if(m<0) m=0;
             }
        }
   }

   cout<<l<<nl;

   get_lost_idiot;
}
