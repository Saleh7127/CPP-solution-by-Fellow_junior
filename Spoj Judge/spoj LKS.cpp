/***
 created: 2021-11-08-13.16.00
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


   ll n,m,i,j,k,l;


   cin>>m>>n;

   ll v[n+4],w[n+4];

   for(i=0;i<n;i++)
   {
        cin>>v[i]>>w[i];
   }

   ll dp[m+4]={0};

   dp[0]=1;


   for(i=0;i<n;i++)
   {
        for(j=m;j>=w[i];j--)
        {
             dp[j]=max(dp[j],dp[j-w[i]]+v[i]);
        }
   }


   cout<<dp[m]<<nl;

   get_lost_idiot;
}

