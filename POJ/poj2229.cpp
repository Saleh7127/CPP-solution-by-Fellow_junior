/***
 created: 2021-10-20-21.19.38
***/
#include <iostream>
#include<vector>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
ll dp[1000002];
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);


   ll n,m,i,j,k,l=1e9;

   vector<ll>x;

   k=1;

   x.push_back(1);

   cin>>n;

   for(i=0;;i++)
   {
        if(k*2>n) break;

        k*=2;

        x.push_back(k);
   }


   dp[0]=1;

   k=x.size();

   for(i=0;i<k;i++)
   {
        for(j=1;j<=n;j++)
        {
             if(j>=x[i])
             {
                  dp[j]+=dp[j-x[i]];
                  if(dp[j]>l)
                  {
                       dp[j]-=l;
                  }
             }
        }
   }

   cout<<dp[n]<<endl;

   get_lost_idiot;
}
