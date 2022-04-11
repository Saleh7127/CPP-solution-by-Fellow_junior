/***
 created: 2021-11-11-20.55.17
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'

ll dp[205][205];
ll a[205],n;

ll solve(ll l,ll r)
{
     if(l>r) return 0;

     if(dp[l][r]!=INT_MIN) return dp[l][r];

     ll ans=INT_MIN,sum=0;

     for(ll i=l;i<=r;i++)
     {
          sum+=a[i];
          ans=max(ans,sum-solve(i+1,r));
     }
     sum=0;
     for(ll i=r;i>=l;i--)
     {
          sum+=a[i];
          ans=max(ans,sum-solve(l,i-1));
     }

     dp[l][r]=ans;

     return ans;
}

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);


   test
   {

        ll i,j,k,l;

        cin>>n;

        for(i=0;i<n;i++) cin>>a[i];

        for(i=0;i<201;i++)
        {
             for(j=0;j<201;j++)
             {
                  dp[i][j]=INT_MIN;
             }
        }

        cout<<"Case "<<cs<<": ";

        cout<<solve(0,n-1)<<nl;
   }


   get_lost_idiot;
}
