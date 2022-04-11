#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
#define maX 10008
bool marked[maX+2];
vector<ll>p;
void sieve()
{
    ll i,j,k,l;
    for(i=2;i<=5000;i++)
    {
        k=0;
        for(j=2;j*j<=i;j++)
        {
            if(i%j==0)
            {
                k=1;
                break;
            }
        }
        if(!k) p.push_back(i);
    }
}
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   sieve();


   ll dp[2000][20];
   memset(dp,0,sizeof dp);

   ll i,j,k,l,n,m;

   dp[0][0]=1;

   for(i=0;i<p.size();i++)
   {
       for(j=1120;j>=p[i];j--)
       {
           for(k=15;k>=1;k--)
           {
               dp[j][k]+=dp[j-p[i]][k-1];
           }
       }
   }

   while(cin>>n>>m)
   {
       if(n+m==0) break;

       cout<<dp[n][m]<<endl;
   }


   return 0;
}
