/***
 created: 2021-12-07-02.51.39
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


   map<ll,ll>x;

   ll n,m,i,j,k,l=1;

   vector<pair<ll,ll>>ans;

   cin>>n;

   ll a[n+4];

   for(i=1;i<=n;i++) cin>>a[i];

   for(i=1;i<=n;i++)
   {
        if(x[a[i]]>0)
        {
             ans.push_back({l,i});
             l=i+1;
             x.clear();
        }
        else x[a[i]]++;
   }

   if(ans.size()==0) cout<<-1<<nl;
   else
   {
        if(ans[ans.size()-1].second!=n)
        {
             ans[ans.size()-1].second=n;
        }

        cout<<ans.size()<<nl;

        for(auto dd:ans)
        {
             cout<<dd.first<<" "<<dd.second<<nl;
        }
   }


   get_lost_idiot;
}
