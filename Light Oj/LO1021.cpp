/***
 created: 2022-01-24-23.17.46
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'
map<char,ll>x;
ll Set(ll N,ll pos){return N=N |(1<<pos);}
ll reset(ll N,ll pos){return N= N & ~(1<<pos);}
bool check(ll N,ll pos){return (bool)(N & (1<<pos));}


void val()
{
    for(char c='0';c<='9';c++)
    {
         x[c]=c-'0';
    }
    for(char c='A';c<='F';c++)
    {
         x[c]=c-'A'+10;
    }
}

ll dp[(1<<16)+4][21];
ll b,k,n;
string a;

ll solve(ll mask,ll rem)
{
      if(mask==(1<<n)-1) return rem==0ll;

      if(dp[mask][rem]!=-1) return dp[mask][rem];

      ll ans=0ll;

      for(ll i=0;i<n;i++)
      {
           if(check(mask,i)==0)
           {
                ans+=solve(Set(mask,i),(rem*b+x[a[i]])%k);
           }
      }
      return dp[mask][rem]=ans;
}

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   val();

   test
   {
        cin>>b>>k;
        cin>>a;
        n=a.size();
        memset(dp,-1,sizeof dp);

        cout<<"Case "<<cs<<": "<<solve(0,0)<<nl;
   }


   get_lost_idiot;
}
