/***
 created: 2022-02-08-20.49.22
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'
ll suf[200005],prf[200005];
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);


   ll n,m=0,i,j,k,x,l=1;

   cin>>n>>k>>x;

   ll a[n+4];

   for(i=1;i<=n;i++)
   {
        cin>>a[i];
   }

   while(k--)
   {
        l*=x;
   }

   prf[1]=a[1];

   for(i=2;i<=n;i++)
   {
        prf[i]=prf[i-1]|a[i];
   }

   suf[n]=a[n];

   for(i=n-1;i>=1;i--)
   {
        suf[i]=suf[i+1]|a[i];
   }

   for(i=1;i<=n;i++)
   {
        m=max(m,prf[i-1]|(a[i]*l)|suf[i+1]);
   }

   cout<<m<<nl;


   get_lost_idiot;
}

