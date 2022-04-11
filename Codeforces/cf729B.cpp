/***
 created: 2021-11-13-21.56.53
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'

ll dp[1005][1005],a[1005][1005];


int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll n,m,i,j,k,l=0;


   cin>>n>>m;


   for(i=0;i<n;i++)
   {
        for(j=0;j<m;j++)
        {
             cin>>a[i][j];
        }
   }

   for(i=0;i<n;i++)
   {
        k=0;
        for(j=1;j<m;j++)
        {
             k+=a[i][j-1];
             if(a[i][j]==0 && k) l++;
        }
   }

   for(i=0;i<n;i++)
   {
        k=0;
        for(j=m-2;j>=0;j--)
        {
             k+=a[i][j+1];
             if(a[i][j]==0 && k) l++;
        }
   }

   for(i=0;i<m;i++)
   {
        k=0;
        for(j=n-2;j>=0;j--)
        {
             k+=a[j+1][i];
             if(a[j][i]==0 && k) l++;
        }
   }

   for(i=0;i<m;i++)
   {
        k=0;
        for(j=1;j<n;j++)
        {
             k+=a[j-1][i];
             if(a[j][i]==0 && k) l++;
        }
   }


   cout<<l<<nl;


   get_lost_idiot;
}
