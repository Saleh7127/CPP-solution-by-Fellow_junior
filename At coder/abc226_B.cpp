/***
 created: 2021-11-07-18.19.00
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


   ll n,m,i,j,k,l;

   map<vector<ll>,ll>x;

   cin>>n;

   l=0;
   for(i=0;i<n;i++)
   {
        cin>>m;
        vector<ll>g;

        g.push_back(m);

        for(j=0;j<m;j++)
        {
             cin>>k;
             g.push_back(k);
        }

        if(x[g]==0) l++;

        x[g]=1;
   }

   cout<<l<<nl;

   get_lost_idiot;
}

