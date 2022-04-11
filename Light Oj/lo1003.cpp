#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
queue<ll>q;
map<string,ll>mp;
vector<ll>g[100000];
ll a[100000];
ll ans,l=1;

void solve()
{
    while(!q.empty())
    {
        ll u=q.front();
        q.pop();

        ans++;

        for(ll i=0;i<g[u].size();i++)
        {
            a[g[u][i]]--;
            if(a[g[u][i]]==0)
            {
                q.push(g[u][i]);
            }
        }

    }
}


int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll n;

   test
   {
       cin>>n;

       ll i,j,k=0;

       l=1;

       for(i=0;i<50000;i++)
       {
           a[i]=0;
           g[i].clear();
       }
       mp.clear();


       for(i=0;i<n;i++)
       {
           string u,v;

           cin>>u>>v;

           if(mp[u]==0)
           {
               k++;
               mp[u]=k;
           }
           if(mp[v]==0)
           {
               k++;
               mp[v]=k;
           }
           ll x,y;
           x=mp[u];
           y=mp[v];

           g[x].push_back(y);
           a[y]++;

       }

       for(i=1;i<=k;i++)
       {
           if(a[i]==0)
           {
               q.push(i);
           }
       }
       ans=0;
       solve();

       if(ans!=k) l=0;


       if(l==0) cout<<"Case "<<cs<<": No"<<endl;
       else cout<<"Case "<<cs<<": Yes"<<endl;

   }


   return 0;
}
