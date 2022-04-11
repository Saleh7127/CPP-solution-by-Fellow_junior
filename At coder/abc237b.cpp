/***
 created: 2022-01-30-18.03.04
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll n,m,i,j,k,l;

   cin>>n>>m;

   ll a[n+4][m+4];

   for(i=1;i<=n;i++)
   {
        for(j=1;j<=m;j++)
        {
             cin>>a[i][j];
        }
   }

   for(i=1;i<=m;i++)
   {
        for(j=1;j<=n;j++)
        {
             cout<<a[j][i]<<" ";
        }
        cout<<nl;
   }

   get_lost_idiot;
}

