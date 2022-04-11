#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)

vector<ll>g[200005];
ll a[200005],c=0,x;

ll dfs(ll ind,ll v)
{
    ll xr=a[ind];

    for(auto d:g[ind])
    {
         if(d!=v)
         {
              xr^=dfs(d,ind);
         }
    }

    if(xr==x)
    {
         c++;
         return 0ll;
    }

    return xr;
}

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   test
   {
        ll n,m,i,j,k,l;

        cin>>n>>m;

        x=c=0;

        for(i=0;i<n+5;i++)
        {
             g[i].clear();
        }

        for(i=1;i<=n;i++)
        {
             cin>>a[i];
             x^=a[i];
        }

        for(i=0;i<n-1;i++)
        {
             cin>>j>>k;
             g[j].push_back(k);
             g[k].push_back(j);
        }

        if(x==0) cout<<"YES"<<endl;
        else
        {
             dfs(1,-1);

             if(c>1 && m>=3) cout<<"YES"<<endl;
             else  cout<<"NO"<<endl;
        }

   }


   return 0;
}
