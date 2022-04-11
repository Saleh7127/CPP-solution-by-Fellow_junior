#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   test
   {
       ll n,i,j,dp[1000]={0};

       vector<pair<double,double>>x;

       cin>>n;

       double k,l;
       for(i=0;i<n;i++)
       {
           cin>>k>>l;
           x.push_back({k,l});
       }

       for(i=0;i<n;i++)
       {
           dp[i]=1;
           for(j=0;j<i;j++)
           {
               if(x[i].first>x[j].first && x[i].second<x[j].second)
               {
                   dp[i]=max(dp[i],dp[j]+1);
               }
           }
       }
       ll ans=0;
       for(i=0;i<n;i++)
       {
           ans=max(ans,dp[i]);
       }

       cout<<ans<<endl;

   }


   return 0;
}
