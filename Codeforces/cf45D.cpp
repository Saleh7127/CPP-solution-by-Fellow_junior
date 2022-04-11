/***
 created: 2021-11-02-01.11.54
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'

bool v[10000005];


bool cmp(pair<ll,pair<ll,ll>>a,pair<ll,pair<ll,ll>>b)
{
     if(a.second.second==b.second.second)
     {
          return a.second.first<b.second.first;
     }
     return a.second.second<b.second.second;
}

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll n,m,i,j,k,l,r;

   cin>>n;

   vector<pair<ll,pair<ll,ll>>>x;

   for(i=1;i<=n;i++)
   {
        cin>>l>>r;
        x.push_back({i,{l,r}});
   }

   sort(x.begin(),x.end(),cmp);

   map<ll,ll>ans;

   for(i=0;i<n;i++)
   {
        l=x[i].second.first;

        while(v[l]!=0 && l<=x[i].second.second)
        {
             l++;
        }

        v[l]=1;

        ans[x[i].first]=l;
   }

   for(i=1;i<=n;i++)
   {
        cout<<ans[i]<<" ";
   }

   cout<<nl;

   get_lost_idiot;
}
