/***
 created: 2022-01-14-20.31.39
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

   ll n,m,i,j,k,l,d,r;

   cin>>n>>d;

   vector<pair<ll,ll>>x;

   for(i=0;i<n;i++)
   {
        cin>>j>>k;

        x.push_back({k,j});
   }


   sort(x.begin(),x.end());

   m=-1;

   j=0;

   for(auto [r,l]:x)
   {
        if(l<=m) continue;

        j++;

        m=r+d-1;
   }

   cout<<j<<nl;

   get_lost_idiot;
}
