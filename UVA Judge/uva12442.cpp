#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
ll g[200000],a[200000],ans=0;
bool v[200000];
ll dfs(ll u)
{
     v[u]=1;
     ll in=g[u];
     if(v[in]==0)
     {
          ans++;
          dfs(in);
     }
     v[u]=0;
     a[u]=ans;
     return ans;
}

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   test
   {
        ll n,m,i,j,k,l=0;
        cin>>n;
        for(i=0;i<n;i++)
        {
             cin>>j>>k;
             g[j]=k;
        }
        memset(a,0,sizeof a);
        memset(v,0,sizeof v);
        for(i=1;i<=n;i++)
        {
             if(a[i]==0)
             {
                  dfs(i);
                  a[i]=ans;
             }
             if(ans>l)
             {
                  l=ans;
                  k=i;
             }
             ans=0;

        }
        cout<<"Case "<<cs<<": "<<k<<endl;
   }

   return 0;
}
