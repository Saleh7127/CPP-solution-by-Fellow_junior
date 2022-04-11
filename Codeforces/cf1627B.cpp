/***
 created: 2022-01-15-22.27.14
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'

ll maxx(ll a,ll b,ll c,ll d)
{
     a=max(a,b);
     c=max(a,c);

     return max(c,d);
}

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   test
   {
        ll n,m,i,j,k,l;

        cin>>n>>m;


        set<pair<ll,pair<ll,ll>>>x;

        for(i=0;i<n;i++)
        {
             for(j=0;j<m;j++)
             {

                  l=maxx(i+j,n-i-1+j,m-j-1+i,n-i+m-j-2);
                  x.insert({l,{i,j}});
             }
        }

        for(i=0;i<(n*m);i++)
        {
             auto d=*x.begin();
             cout<<d.first<<" ";
             x.erase(d);

        }
        cout<<nl;

   }

   get_lost_idiot;
}

