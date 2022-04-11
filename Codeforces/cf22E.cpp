#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)

ll a[200005];
bool v[200005];

ll dfs(ll in)
{
     if(v[in]) return in;

     v[in]=1;

     return dfs(a[in]);
}

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll n,m,i,j,k=0,l=0;

   cin>>n;

   map<ll,ll>x;

   for(i=1;i<=n;i++)
   {
        cin>>a[i];
        x[a[i]]++;
   }

   vector<pair<ll,ll>>ans;

   for(i=1;i<=n;i++)
   {
        if(x[i]==0)
        {
             k++;
             ans.push_back({i,dfs(i)});
        }
   }

   for(i=1;i<=n;i++)
   {
        if(v[i]==0)
        {
             l++;
             ans.push_back({i,dfs(i)});
        }
   }

   m=ans.size();

   if(k==0 && l==1)
   {
        cout<<0<<endl,exit(0);
   }

   cout<<m<<endl;

   for(i=0;i<m;i++)
   {
        cout<<ans[i].second<<" "<<ans[(i+1)%m].first<<endl;
   }

   return 0;
}
