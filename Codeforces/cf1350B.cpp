#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)

ll a[200005],dp[200005];

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);


   test
   {
        ll n,m,i,j,k,l,ans=0;

        cin>>n;

        for(i=1;i<=n;i++)
        {
             cin>>a[i];
             dp[i]=1;
        }

        for(i=1;i<=n;i++)
        {
             for(j=i+i;j<=n;j+=i)
             {
                  if(a[j]>a[i])
                  {
                       dp[j]=max(dp[j],dp[i]+1);
                  }
             }
             ans=max(ans,dp[i]);
        }

        cout<<ans<<endl;
   }

   return 0;
}
