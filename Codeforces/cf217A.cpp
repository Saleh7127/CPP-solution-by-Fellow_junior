#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)

ll a[105],b[105],v[105],n,m;

void dfs(ll x)
{
    v[x]=1;
    for(ll i=1;i<=n;i++)
    {
        if((a[i]==a[x] || b[i]==b[x]) && v[i]==0)
        {
            dfs(i);
        }
    }
}

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll i,j,k,l=0;

   cin>>n;
   for(i=1;i<=n;i++)
   {
       cin>>a[i]>>b[i];
   }
   for(i=1;i<=n;i++)
   {
       if(v[i]==0)
       {
           l++;
           dfs(i);
       }
   }
   cout<<l-1<<endl;
   return 0;
}

