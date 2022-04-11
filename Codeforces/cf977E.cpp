#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)

vector<ll>y;
vector<ll>g[200005];
ll v[200005];


void dfs(ll in)
{
    v[in]=1;
    y.push_back(in);

    for(auto ii:g[in])
    {
        if(v[ii]==0)
        {
            dfs(ii);
        }
    }
}


int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);


   ll a,b,n,m,i,j,k,l=0;

   cin>>n>>m;

   map<ll,ll>f1;

   for(i=0;i<m;i++)
   {
       cin>>a>>b;
       g[a].push_back(b);
       g[b].push_back(a);
       f1[a]++;
       f1[b]++;
   }

   for(i=1;i<=n;i++)
   {
       if(v[i]==0)
       {
           y.clear();
           dfs(i);
           k=0;
           for(auto ii:y)
           {
               if(f1[ii]!=2)
               {
                   k=1;
                   break;
               }
           }
           if(!k) l++;
       }
   }

   cout<<l<<endl;

   return 0;
}
