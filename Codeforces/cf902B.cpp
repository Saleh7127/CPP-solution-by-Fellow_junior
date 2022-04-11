#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)

vector<ll>a[100005];
ll ans=0,c[100005];

void dfs(ll in,ll d)
{
    for(auto i: a[in])
    {
        if(c[i]!=d)
        {
            ans++;
            dfs(i,c[i]);
        }
        else dfs(i,d);
    }
}

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll n,m,i,j,k,l;

   cin>>n;
   for(i=2;i<=n;i++)
   {
       cin>>m;
       a[m].push_back(i);
   }
   for(i=1;i<=n;i++)
   {
       cin>>c[i];
   }
   dfs(1,c[1]);

   cout<<ans+1<<endl;
   return 0;
}
