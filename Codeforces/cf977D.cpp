#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
vector<ll>g[20000];
ll v[20000];
stack<ll>x;

void dfs(ll in)
{
    v[in]=1;
    for(auto ii: g[in])
    {
        if(v[ii]==0)
        {
            dfs(ii);
        }
    }
    x.push(in);
}

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll n,m,i,j,k,l;
   cin>>n;
   ll a[n+5];

   for(i=1;i<=n;i++)
   {
       cin>>a[i];
   }

   for(i=1;i<=n;i++)
   {
       for(j=1;j<=n;j++)
       {
           if(a[i]%3==0 && a[i]/3==a[j])
           {
               g[i].push_back(j);
           }
           if(a[i]*2==a[j])
           {
               g[i].push_back(j);
           }
       }
   }

   for(i=1;i<=n;i++)
   {
       if(v[i]==0) dfs(i);
   }

   while(x.empty()==false)
   {
       cout<<a[x.top()]<<" ";
       x.pop();
   }


   return 0;
}
