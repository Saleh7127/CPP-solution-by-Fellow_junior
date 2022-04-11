#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
bool v[200005];
vector<ll>g[20000];

void dfs(ll in)
{
     if(v[in]) return;

     v[in]=1;
     for(auto dd:g[in])
     {
          if(v[dd]==0)
          {
               dfs(dd);
          }
     }
}

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   string a,c;
   ll n,m,i,j,k,l;
   test
   {

        cin>>c;
        n=c[0]-65;
        getline(cin,a);
        while(getline(cin,a))
        {
             if(a.size()==0) break;

             g[a[0]-65].push_back(a[1]-65);
             g[a[1]-65].push_back(a[0]-65);
        }
        memset(v,0,sizeof v);

        ll l=0;

        for(i=0;i<=n;i++)
        {
             if(v[i]==0)
             {
                  l++;
                  dfs(i);
             }
        }
        cout<<l<<endl;
        if(cs!=t) cout<<endl;

        for(i=0;i<=n;i++)
        {
             g[i].clear();
        }
   }

   return 0;
}
