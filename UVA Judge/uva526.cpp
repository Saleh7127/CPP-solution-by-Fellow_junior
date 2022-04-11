/***
 created: 2021-12-01-16.33.52
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'

string a,b;

ll dp[90][90],n,m,id=0;

ll cost(ll i,ll j)
{
    if(i==n) return m-j;
    if(j==m) return n-i;

    if(dp[i][j]!=-1) return dp[i][j];

    ll ans;

    if(a[i]==b[j])
    {
         ans=cost(i+1,j+1);
    }
    else
    {
         ll o=1+cost(i+1,j+1);
         ll p=1+cost(i+1,j);
         ll q=1+cost(i,j+1);

         ans=min({o,p,q});
    }

    return dp[i][j]=ans;
}



void way(ll i,ll j)
{
     if(i==n)
     {
          while(j<m)
          {
               ++id;
               cout<<id<<" ";
               cout<<"Insert "<<j+1<<","<<b[j]<<nl;
               j++;
          }
          return ;
     }

     if(j==m)
     {
          while(i<n)
          {
               ++id;
               cout<<id<<" ";
               cout<<"Delete "<<j+1<<nl;
               i++;
          }
          return ;
     }

     if(a[i]==b[j]) way(i+1,j+1);

     else
     {
          if(dp[i][j]==dp[i+1][j]+1)
          {
               ++id;
               cout<<id<<" ";

               cout<<"Delete "<<j+1<<nl;

               way(i+1,j);
          }
          else if(dp[i][j]==dp[i][j+1]+1)
          {
               ++id;
               cout<<id<<" ";

               cout<<"Insert "<<j+1<<","<<b[j]<<nl;

               way(i,j+1);
          }
          else
          {
               ++id;
               cout<<id<<" ";

               cout<<"Replace "<<j+1<<","<<b[j]<<nl;

               way(i+1,j+1);
          }
     }

     return;

}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

     ll ss=0;

     while(getline(cin,a))
     {
          getline(cin,b);

          n=a.size();
          m=b.size();

          memset(dp,-1,sizeof dp);

          if(ss) cout<<nl;

          cout<<cost(0,0)<<nl;

          way(0,0);

          ss++;

          id=0;

     }
     return 0;

}

