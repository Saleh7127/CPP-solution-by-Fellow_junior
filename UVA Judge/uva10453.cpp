/***
 created: 2021-11-29-13.30.04
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'

ll dp[1005][1005],odd=0;
string a;
vector<ll>x;

ll solve1(ll i,ll j)
{
     if(i>=j) return 0;

     if(dp[i][j]!=-1) return dp[i][j];

     ll ans=0;

     if(a[i]==a[j])
     {
          ans=solve1(i+1,j-1);
     }
     else
     {
          ans=1+min(solve1(i+1,j),solve1(i,j-1));
     }

     return dp[i][j]=ans;

}

void solve(ll i,ll j)
{
     if(i>j) return ;
     if(i==j)
     {
          x.push_back(i);
          odd=1;
          return;
     }
     if(a[i]==a[j])
     {
          x.push_back(i);
          solve(i+1,j-1);
          return;
     }
     ll xx,yy;

     xx=solve1(i+1,j)+1;
     yy=solve1(i,j-1)+1;

     if(xx<yy)
     {
          x.push_back(i);
          solve(i+1,j);
     }
     else
     {
           x.push_back(j);
           solve(i,j-1);
     }
}

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);


   while(cin>>a )
   {
        memset(dp,-1,sizeof dp);

        cout<<solve1(0,a.size()-1)<<" ";


        solve(0,a.size()-1);

        for(ll i=0;i<x.size();i++)
        {
             cout<<a[x[i]];
        }
        for(ll i=x.size()-1-odd;i>=0;i--)
        {
             cout<<a[x[i]];
        }
        cout<<nl;
        odd=0;
        x.clear();
   }


   get_lost_idiot;
}
