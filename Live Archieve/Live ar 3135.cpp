/***
 created: 2021-10-26-00.20.36
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define nl '\n'

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);


   string s;

   ll n,m,i,j,k,l;

   priority_queue<pair<ll,pair<ll,ll>>,vector<pair<ll,pair<ll,ll>>>,greater<pair<ll,pair<ll,ll>>>>q;

   while(cin>>s && s[0]!='#')
   {
        cin>>n>>m;
        q.push({m,{n,m}});
   }

   cin>>k;

   while(k--)
   {
        auto d=q.top();
        q.pop();

        cout<<d.second.first<<endl;

        i=d.second.first;
        j=d.second.second;
        l=d.first+d.second.second;

        q.push({l,{i,j}});
   }

   return 0;
}
