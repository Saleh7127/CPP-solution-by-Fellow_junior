/***
 created: 2022-01-27-19.27.38
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'

ll Set(ll N,ll pos){return N=N |(1<<pos);}
ll reset(ll N,ll pos){return N= N & ~(1<<pos);}
bool check(ll N,ll pos){return (bool)(N & (1<<pos));}
ll n,a[16][16];
ll dp[(1<<14)+5];

ll solve(ll mask)
{
     if(mask==(1<<n)-1) return 0;
     if(dp[mask]!=-1) return dp[mask];

     ll ans=1e16;

     for(ll i=0;i<n;i++)
     {
          if(check(mask,i)==0)
          {
               ll p=a[i][i];

               for(ll j=0;j<n;j++)
               {
                    if(i!=j && check(mask,j)==0)
                    {
                         p+=a[i][j];
                    }
               }
               ll x=p+solve(Set(mask,i));
               ans=min(ans,x);
          }
     }

     return dp[mask]=ans;
}

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);


   test
   {
        cin>>n;

        for(ll i=0;i<n;i++)
        {
             for(ll j=0;j<n;j++)
             {
                  cin>>a[i][j];
             }
        }

        memset(dp,-1,sizeof dp);

        cout<<"Case "<<cs<<": "<<solve(0)<<nl;
   }


   get_lost_idiot;
}
