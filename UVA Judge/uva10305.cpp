#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
ll v[105],n,m;
vector<ll>g[1000];

void solve()
{
    queue<ll>q;

    for(ll i=1;i<=n;i++)
    {
        if(v[i]==0)
        {
            q.push(i);
        }
    }
    while(!q.empty())
    {
        ll u=q.front();

        q.pop();

        cout<<u<<" ";

        for(ll i=0;i<g[u].size();i++)
        {
            v[g[u][i]]--;
            if(v[g[u][i]]==0)
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

   while(cin>>n>>m)
   {
        if(n==0 && m==0) break;

       for(ll i=0;i<105;i++)
       {
           v[i]=0;
           g[i].clear();
       }
       for(ll i=0;i<m;i++)
       {
           ll k,l;
           cin>>k>>l;
           g[k].push_back(l);
           v[l]++;
       }
       solve();

       cout<<endl;

   }


   return 0;
}
