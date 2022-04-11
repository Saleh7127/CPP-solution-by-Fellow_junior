/***
 created: 2021-12-03-00.57.20
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'

ll dp[20005];
ll p[505],w[505];


int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   test

   {
        ll n,m,i,j,k,l,e,f;

        cin>>e>>f>>n;
        f-=e;

        for(i=1;i<=20000;i++) dp[i]=1e12;

        dp[0]=0;

        for(i=0;i<n;i++)
        {
             cin>>p[i]>>w[i];
        }

        for(i=0;i<n;i++)
        {
             for(j=w[i];j<=f;j++)
             {
                  dp[j]=min(dp[j],dp[j-w[i]]+p[i]);
             }
        }

        if(dp[f]==1e12) cout<<"This is impossible."<<nl;
        else cout<<"The minimum amount of money in the piggy-bank is "<<dp[f]<<"."<<nl;
   }



   get_lost_idiot;
}
