/***
 created: 2021-12-06-13.20.24
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


   ll n,m,i,j,k,l,s,e,r;

   cin>>n>>k;

   ll a[n+4];

   map<ll,ll>x;

   for(i=0;i<n;i++) cin>>a[i];

   s=e=l=r=0;

   x[a[0]]++;

   while(r!=n-1)
   {
        r++;
        x[a[r]]++;

        while(x.size()>k)
        {
             x[a[l]]--;
             if(x[a[l]]==0)
             {
                  x.erase(a[l]);
             }
             l++;
        }

        if(r-l+1>=(e-s+1))
        {
             s=l;
             e=r;
        }
   }

   cout<<s+1<<" "<<e+1<<nl;

   get_lost_idiot;
}
