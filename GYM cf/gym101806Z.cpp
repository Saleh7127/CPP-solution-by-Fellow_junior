#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);


   ll n,m,i,j,k,l;

   cin>>n;

   if(n==1) l=1;
   else l=2;

   ll a[n+4];

   for(i=0;i<n;i++)
   {
        cin>>a[i];
   }

   ll dp[n+4]={0};

   dp[0]=1;
   dp[1]=2;

   for(i=2;i<n;i++)
   {
        if(a[i-1]>=a[i-2] && a[i-1]<=a[i])
        {
             dp[i]=2;
        }
        else if(a[i-1]<=a[i-2] && a[i-1]>=a[i])
        {
             dp[i]=2;
        }
        else
        {
             dp[i]=dp[i-1]+1;
        }
   }

   for(i=0;i<n;i++) l=max(l,dp[i]);

   cout<<l<<endl;

   return 0;
}

