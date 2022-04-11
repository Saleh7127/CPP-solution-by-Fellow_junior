/***
 created: 2022-01-26-15.34.45
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'
map<char,ll>x;
ll dp[(1<<10)+1][1002],m,n;
string a;


ll Set(ll N,ll pos){return N=N |(1<<pos);}
ll reset(ll N,ll pos){return N= N & ~(1<<pos);}
bool check(ll N,ll pos){return (bool)(N & (1<<pos));}

ll solve(ll rem,ll mask)
{
     if(mask==(1<<n)-1) return rem==0;

     if(dp[mask][rem]!=-1) return dp[mask][rem];

     ll ans=0;

     for(ll i=0;i<n;i++)
     {
          if(check(mask,i)==0)
          {
               ans+=solve((rem*10+x[a[i]])%m,Set(mask,i));
          }
     }

     return dp[mask][rem]=ans;
}

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   for(char c='0';c<='9';c++) x[c]=c-'0';
   ll f[12];
   f[0]=1;
   for(ll i=1;i<=12;i++) f[i]=f[i-1]*i;

   test
   {
        cin>>a>>m;

        n=a.size();

        memset(dp,-1,sizeof dp);

        ll ans=solve(0,0);

        map<char,ll>y;

        for(ll i=0;i<n;i++)
        {
             y[a[i]]++;
        }

        for(char c='0';c<='9';c++)
        {
             ans/=f[y[c]];
        }

        cout<<"Case "<<cs<<": "<<ans<<endl;
   }

   get_lost_idiot;
}
