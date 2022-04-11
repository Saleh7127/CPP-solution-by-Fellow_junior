/***
 created: 2022-02-09-14.39.07
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'

ll parent[500005],rankk[5000005];

ll find_set(ll v)
{
    if (v == parent[v])
    {
        return v;
    }
    return parent[v] = find_set(parent[v]);
}

void union_sets(ll a, ll b)
{
    a = find_set(a);
    b = find_set(b);

    if (a != b)
    {
        if (rankk[a] < rankk[b])
        {
            swap(a, b);
        }
        parent[b] = a;

        rankk[a]+=rankk[b];
    }

    return;
}

void make_set(ll n)
{
    for(ll i=0; i<=n+2; i++)
    {
        parent[i] = i;
        rankk[i] = 1;
    }
}

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll n,m,i,j,k,l;

   cin>>n>>m;

   make_set(n);

   while(m--)
   {
        cin>>k;
        l=0;
        while(k--)
        {
             cin>>j;
             if(l)
             {
                 union_sets(j,l);
             }

             l=j;
        }
   }

   for(i=1;i<=n;i++)
   {
        cout<<rankk[find_set(i)]<<" ";
   }
   cout<<nl;

   get_lost_idiot;
}
