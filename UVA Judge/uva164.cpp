/***
 created: 2021-11-29-17.34.32
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define get_lost_idiot return 0
#define nl '\n'

string a,b;

ll dp[30][30],n,m;

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
               cout<<"I"<<b[j];
               if(j<9) cout<<"0";
               cout<<j+1;
               j++;
          }
          return ;
     }
     if(j==m)
     {
          while(i<n)
          {
               cout<<"D"<<a[i];
               if(j<9) cout<<"0";
               cout<<j+1;
               i++;
          }
          return ;
     }

     if(a[i]==b[j]) way(i+1,j+1);

     else
     {
          if(dp[i][j]==dp[i+1][j]+1)
          {
               cout<<"D"<<a[i];
               if(j<9) cout<<"0";
               cout<<j+1;

               way(i+1,j);
          }
          else if(dp[i][j]==dp[i][j+1]+1)
          {
               cout<<"I"<<b[j];
               if(j<9) cout<<"0";
               cout<<j+1;

               way(i,j+1);
          }
          else
          {
               cout<<"C"<<b[j];
               if(j<9) cout<<"0";
               cout<<j+1;

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

     while(cin>>a)
     {
          if(a=="#") break;
          cin>>b;

          n=a.size();
          m=b.size();

          memset(dp,-1,sizeof dp);

          ll w=cost(0,0);

          way(0,0);

          cout<<"E"<<nl;
     }

}
