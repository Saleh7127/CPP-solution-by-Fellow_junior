/***
 created: 2022-01-06-12.25.37
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'

vector<ll>a,g[100000];


ll dsu(ll n)
{
     ll x=1;

     for(auto d:g[n])
     {
          ll v=dsu(d);
          a[n]+=(v*x);
          x+=v;
     }

     return x;
}

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);


   test
   {
        ll n,m,i,j,k,l;

        cin>>n;

        a.clear();
        a.push_back(0);
        for(i=0;i<=n;i++)
        {
             g[i].clear();
             a.push_back(0);
        }
        a.pop_back();

        vector<ll>s;

        for(i=1;i<=n;i++)
        {
             cin>>k;

             if(k) g[k].push_back(i);
             else s.push_back(i);
        }

        for(auto d:s) {
          dsu(d);
        }

        cout<<"Forest#"<<cs<<": ";
        a.erase(a.begin());


        for(i=0;i<a.size();i++)
        {
             if(i==a.size()-1) cout<<a[i]<<nl;
             else cout<<a[i]<<" ";
        }

   }


   get_lost_idiot;
}

