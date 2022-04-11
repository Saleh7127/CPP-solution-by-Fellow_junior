/***
 created: 2021-11-07-22.02.44
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'

ll dp[20005];
ll a[20005];

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);


   test
   {
        ll n,m,i,j,k,l;

        cin>>n;

        for(i=0;i<n;i++)
        {
             cin>>a[i];
        }

        memset(dp,0,sizeof dp);

        l=dp[0]=a[0];

        for(i=1;i<n;i++)
        {
             if(i-2>=0)
             {
                  dp[i]=max(dp[i-1],dp[i-2]+a[i]);
             }
             else
             {
                  dp[i]=max(dp[i-1],a[i]);
             }

             l=max(l,dp[i]);
        }

        cout<<"Case "<<cs<<": "<<l<<nl;

   }


   get_lost_idiot;
}

