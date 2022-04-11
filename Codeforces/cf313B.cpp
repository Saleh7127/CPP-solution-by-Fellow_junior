/***
 created: 2021-11-13-22.33.22
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'
ll dp[200005];
ll c[200005];
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);


   ll n,m,i,j,k,l;

   string a;

   cin>>a;

   a='h'+a;

   for(i=1;i<a.size();i++)
   {
        if(a[i]==a[i-1])
        {
             dp[i]=dp[i-1]+1;
        }
        else dp[i]+=dp[i-1];
   }



   cin>>m;

   while(m--)
   {
        cin>>k>>l;


        cout<<dp[l]-dp[k]<<nl;
   }

   get_lost_idiot;
}
