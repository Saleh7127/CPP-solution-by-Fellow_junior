/***
 created: 2021-10-20-00.44.16
***/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);


   test
   {
        ll n,m,i,j,k,l;

        cin>>n;

        ll a[n+4];

        ll dp[n+4]={0};

        for(i=1;i<=n;i++)
        {
             cin>>a[i];
             dp[i]=a[i];
        }

        l=0ll;

        for(i=2;i<n;i++)
        {
             dp[i]=max(dp[i-2]+a[i],dp[i-1]);
             l=max(l,dp[i]);
        }

        dp[1]=0;

        for(i=2;i<=n;i++)
        {
             dp[i]=max(dp[i-2]+a[i],dp[i-1]);
             l=max(l,dp[i]);
        }

        cout<<"Case "<<cs<<": "<<l<<endl;
   }


   get_lost_idiot;
}
