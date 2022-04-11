#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
bool v[100005];
vector<ll>g[100005];
vector<ll>topsort;

void dfs(ll in)
{
    if(v[in]) return;
    v[in]=1;
    for(ll i=0;i<g[in].size();i++)
    {
        if(v[g[in][i]]==0)
        {
            dfs(g[in][i]);
        }
    }
    topsort.push_back(in);
}

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   test
   {

       ll n,m,i,j,k,l=0;
       cin>>n>>m;


       for(i=0;i<n+5;i++)
       {
           g[i].clear();
           v[i]=0;
       }
       topsort.clear();

       for(i=0;i<m;i++)
       {
           ll a,b;
           cin>>a>>b;
           g[a].push_back(b);
       }
       for(i=1;i<=n;i++)
       {
           if(v[i]==0)
           {
               dfs(i);
           }
       }
       memset(v,0,sizeof(v));
       for(i=topsort.size()-1;i>=0;i--)
       {
           if(v[topsort[i]]==0)
           {
               l++;
               dfs(topsort[i]);
           }
       }
       cout<<"Case "<<cs<<": ";
       cout<<l<<endl;

   }


   return 0;
}
