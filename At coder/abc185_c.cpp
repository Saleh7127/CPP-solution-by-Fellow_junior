/***
 created: 2021-11-06-16.13.37
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


   ll n,m,i,j,k,l=1;

   cin>>n;

   n-=12;


   n=n+11;
   k=11;


   for(i=1;i<=k;i++)
   {
        l*=(n-i+1);
        l/=i;
   }


   cout<<l<<nl;

   get_lost_idiot;
}
