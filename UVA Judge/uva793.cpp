/***
 created: 2021-11-20-21.25.30
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'

vector<ll>parent(200005),rankk(200005);

void make_set(ll n)
{
    for(ll i=0; i<=n+5; i++)
    {
        parent[i] = i;
        rankk[i] = 0;
    }
}

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

        if (rankk[a] == rankk[b])
        {
            rankk[a]++;
        }
    }
}

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);


   test
   {
        ll n,m,i,j,k=0,l=0,u,v;
        string x;

        char c;

        cin>>n;

        make_set(n+2);

        cin.ignore();

        while(getline(cin,x) && x.size())
        {
             stringstream ss(x);

             ss>>c>>u>>v;

             if(c=='c')
             {
                  union_sets(u,v);
             }
             else
             {
                  if(find_set(u)==find_set(v))
                  {
                       k++;
                  }
                  else l++;
             }
        }

        cout<<k<<","<<l<<endl;

        if(cs!=tt) cout<<endl;

   }


   get_lost_idiot;
}
