/***
 created: 2021-10-22-18.48.36
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

        cin>>n>>m;

       ll a[n+4];

       ll dp[n+4][m+4];

       for(i=0;i<n;i++)
       {
            cin>>a[i];
            a[i]+=m;
            a[i]%=m;
       }

       memset(dp,0,sizeof dp);

       dp[0][0]=1;

       for(i=0;i<n;i++)
       {
            for(j=0;j<m;j++)
            {
                 if(dp[i][j])
                 {
                      dp[i+1][(j+a[i]+m)%m]=1;
                      dp[i+1][(j-a[i]+m)%m]=1;
                 }
            }
       }

       if(dp[n][0]) cout<<"Divisible"<<endl;
       else cout<<"Not divisible"<<endl;

   }



   get_lost_idiot;
}


/*

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0

ll dp[10005][102];
ll a[20005];
ll n,k,ans=0;

void solve(ll i, ll sum)
{
     if(i==n+1)
     {
          if(sum%k==0) ans=1;
          return;
     }

     ll rem=sum+k;

     rem%=k;

     if(dp[i][rem]!=-1) return ;

     dp[i][rem]=1;

     rem=sum+a[i];

     solve(i+1,rem);

     rem=sum-a[i];

     solve(i+1,rem);

}

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);


   test
   {
        ll i,j;

        cin>>n>>k;

        for(i=1;i<=n;i++) cin>>a[i];

        memset(dp,-1,sizeof dp);

        ans=0;

        solve(0,0);

        if(ans) cout<<"Divisible"<<endl;
        else cout<<"Not divisible"<<endl;
   }


   get_lost_idiot;
}
*/
