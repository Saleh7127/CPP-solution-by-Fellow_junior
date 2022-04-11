#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
ll dp[100005][10];
ll a[100005];
ll solve(ll n,ll i,ll k,ll z)
{
     if(i<0 || i>=n || k<0 || z<0) return 0ll;

     if(dp[i][z]!=-1) return dp[i][z];

     dp[i][z]=max(solve(n,i+1,k-1,z),solve(n,i-1,k-1,z-1)) + a[i];

     return dp[i][z];
}


int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   test
   {
        ll n,m,i,j,k,z,l;

        cin>>n>>k>>z;

        for(i=0;i<n;i++)
        {
             cin>>a[i];

             for(j=0;j<9;j++)
             {
                  dp[i][j]=-1;
             }
        }



        cout<<solve(n,0,k,z)<<endl;
   }


   return 0;
}
