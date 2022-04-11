/***
 created: 2022-01-15-19.53.37
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

   ll n,m,i,j,k,l,sum=0;

   cin>>n>>k;

   if(k>1e6)
   {
        cout<<-1<<nl,exit(0);
   }


   m=(k*(k+1))/2;

   set<ll>di;

   for(i=1;i*i<=n;i++)
   {
        if(n%i==0)
        {
             di.insert(i);
             di.insert(n/i);
        }
   }

   auto dd=di.lower_bound(m);

   if(dd==di.end())
   {
        cout<<-1<<nl,exit(0);
   }

   l=*dd;

   for(i=1;i<k;i++)
   {
        cout<<(n/l)*i<<" ";
        sum+=(n/l)*i;
   }

   cout<<n-sum<<nl;


   get_lost_idiot;
}
