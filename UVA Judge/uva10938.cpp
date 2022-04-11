/***
 created: 2022-02-05-23.25.32
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'
vector<ll>g[5010];
ll blift[5010][20];
ll depth[5020];
ll v[5020];
ll lg,n;

void dfs(ll node)
{
    v[node]=1;
    for(int d:g[node])
    {
        if(v[d]==0)
        {
            depth[d]=depth[node]+1;
            blift[d][0]=node;
            dfs(d);
        }
    }
}

void binarylifting()
{
    for(ll j=1; j<=lg; j++)
    {
        for(ll i=1; i<=n; i++)
        {
            if(blift[i][j-1]!=-1)
            {
                ll par = blift[i][j-1];

                blift[i][j] = blift[par][j-1];
            }
        }
    }
}

ll lca(ll a,ll b)
{
    ll k=depth[a]-depth[b];

    for(ll j=lg-1; j>=0; j--)
    {
        if(k &(1<<j))
        {
            a=blift[a][j];
        }
    }

    if(a==b)
    {
        return a;
    }

    for(ll j=lg-1; j>=0; j--)
    {
        if(blift[b][j]!=-1 &&  blift[a][j]!=blift[b][j])
        {
            a=blift[a][j];
            b=blift[b][j];
        }
    }

    return blift[a][0];
}

void clr()
{
     for(ll i=0;i<n+2;i++)
     {
          g[i].clear();
          v[i]=0;
          depth[i]=0;
          for(ll j=0;j<20;j++)
          {
               blift[i][j]=-1;
          }
     }
}

ll kth_lca(ll a,ll k)
{
     for(ll i=lg;i>=0;i--)
     {
          if(k &(1<<i))
          {
               a=blift[a][i];
          }
     }
     return a;
}

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   while(cin>>n && n)
   {
        clr();

        lg=log2(n)+1;

        ll q,i,j,k,l,m;

        for(i=1;i<n;i++)
        {
             cin>>j>>k;
             g[j].push_back(k);
             g[k].push_back(j);
        }
        dfs(1);
        binarylifting();

        cin>>q;

        while(q--)
        {
             cin>>j>>k;

             if(depth[j]<depth[k]) swap(j,k);

             l=lca(j,k);
             m=depth[j]+depth[k]-2*depth[l]+1;

             if(m%2)
             {
                  l=kth_lca(j,m/2);
                  cout<<"The fleas meet at "<<l<<"."<<nl;
             }
             else
             {
                  m=(m/2)-1;
                  l=kth_lca(j,m);

                  j=blift[l][0];

                  /// cout<<l<<" "<<j<<nl;

                  if(l>j) swap(l,j);

                  cout<<"The fleas jump forever between "<<l<<" and "<<j<<"."<<nl;
             }
        }
   }
   get_lost_idiot;
}

