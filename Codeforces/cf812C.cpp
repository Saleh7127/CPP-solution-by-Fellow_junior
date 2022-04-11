/***
 created: 2022-01-09-21.49.13
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'

ll a[100056];

ll solve(ll k,ll n)
{
     vector<ll>v;

     for(ll i=0;i<n;i++)
     {
          ll z=(a[i]+ (i+1)*k);
          v.push_back(z);
     }

     sort(v.begin(),v.end());

     ll x=0ll;

     for(ll i=0;i<k && i<n;i++)
     {
          x+=v[i];
     }

     v.clear();

     return x;
}

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll n,m,i,j,k,ans=0,sum=0;

   cin>>n>>m;

   for(i=0;i<n;i++)
   {
        cin>>a[i];
   }

   ll l=0,h=n;

   while(l<=h)
   {
        ll mid=(l+h)/2;

        j=solve(mid,n);

        if(j<=m)
        {
             ans=mid;
             sum=j;
             l=mid+1;
        }
        else
        {
             h=mid-1;
        }
   }

   cout<<ans<<" "<<sum<<nl;

   get_lost_idiot;
}

