/***
 created: 2021-11-09-00.36.46
***/

/// LIS with path in O(NlogN)

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

   ll n=0,m=1,i,j,k,l;

   vector<ll>a,lis,path;

   while(cin>>k)
   {
        n++;
        a.push_back(k);
   }

   ll dp[n+4];

   dp[0]=1;

   lis.push_back(a[0]);

   for(i=1;i<n;i++)
   {
        if(a[i]>lis[lis.size()-1])
        {
             lis.push_back(a[i]);
             m++;
             dp[i]=m;
        }
        else
        {
             l=lower_bound(lis.begin(),lis.end(),a[i])-lis.begin();
             dp[i]=l+1;
             lis[l]=a[i];
        }
   }

   for(i=n-1;i>=0;i--)
   {
        if(dp[i]==m)
        {
             path.push_back(a[i]);
             m--;
        }
   }

   cout<<path.size()<<nl<<"-"<<nl;

   for(i=path.size()-1;i>=0;i--)
   {
        cout<<path[i]<<nl;
   }

   get_lost_idiot;
}
