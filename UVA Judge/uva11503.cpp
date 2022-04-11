#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)

map<string,string>parent;
map<string,ll>siz;
map<string,bool>frnd;

string findset(string v)
{
    if (v == parent[v])
    {
        return v;
    }
    return parent[v] = findset(parent[v]);
}

ll unionn(string a, string b)
{
    a = findset(a);
    b = findset(b);

    if(a==b) return siz[a];
    else
    {
         parent[b]=a;
         siz[a]+=siz[b];
         siz[b]=siz[a];

         return siz[a];
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string a,b;

    ll n,m,i,j,k,l;

    test
    {
         cin>>n;
         while(n--)
         {
              cin>>a>>b;

              if(frnd[a]==0)
              {
                   frnd[a]=1;
                   parent[a]=a;
                   siz[a]=1;
              }
              if(frnd[b]==0)
              {
                   frnd[b]=1;
                   parent[b]=b;
                   siz[b]=1;
              }

              cout<<unionn(a,b)<<endl;
         }

         frnd.clear();
         parent.clear();
         siz.clear();

    }


    return 0;
}
