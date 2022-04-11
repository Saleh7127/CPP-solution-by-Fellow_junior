/***
 created: 2022-01-14-20.00.34
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


   ll n,m,i,j,k,l=0;

   cin>>n;


   for(i=1;i*i<=n;i++)
   {
        l+=(n/i - n/(i+1))*i;
        k=i;
   }

   for(i=1;i<=n/(k+1);i++)
   {
        l+=(n/i);
   }

   cout<<l<<nl;

   get_lost_idiot;
}
