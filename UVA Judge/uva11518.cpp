#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)

vector<ll>g[100005];
bool v[100005];


void dfs(ll x)
{
    if(v[x]==1) return;
    v[x]=1;
    for(auto i: g[x])
    {
        if(v[i]==0)
        {
            dfs(i);
        }
    }
}

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   test
   {
       ll a,b=0,n,m,l,i,j,k;
       cin>>n>>m>>l;
       for(i=0;i<m;i++)
       {
           cin>>j>>k;
           g[j].push_back(k);
       }
       while(l--)
       {
           cin>>a;
           dfs(a);
       }
       for(i=1;i<=n;i++)
       {
           if(v[i]==1) b++;
       }
       cout<<b<<endl;

       for(i=0;i<=n;i++)
       {
           g[i].clear();
           v[i]=0;
       }
   }


   return 0;
}
