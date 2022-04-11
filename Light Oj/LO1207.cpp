/***
 created: 2021-11-19-18.11.18
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   test
   {
        ll n,m=0,i,j,k,l,r;

        cin>>n;

        set<ll,greater<ll>>x;
        vector<ll>s[2*n+4];
        vector<ll>e[2*n+4];
        ll v[2*n+4]={0};

        for(i=1;i<=n;i++)
        {
             cin>>l>>r;
             s[l].push_back(i);
             e[r].push_back(i);
        }

        for(i=1;i<=2*n;i++)
        {
             if(s[i].size())
             {
                  for(auto d:s[i])
                  {
                       x.insert(d);
                  }
             }
             if(x.size())
             {
                  if(v[*x.begin()]==0) m++;

                  v[*x.begin()]=1;
             }
             if(e[i].size())
             {
                  for(auto d:e[i])
                  {
                       x.erase(x.find(d));
                  }
             }
        }

        cout<<"Case "<<cs<<": "<<m<<nl;

   }

   get_lost_idiot;
}
