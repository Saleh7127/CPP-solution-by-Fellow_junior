/***
 created: 2021-11-22-15.36.45
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'

ll dis(ll a,ll b,ll c,ll d)
{
     return abs(a-c)+abs(b-d);
}


int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);


   test
   {
        ll n,x,y,m,i,j,k,l,u=0;

        cin>>x>>y;

        for(i=0;i<=x;i++)
        {
             for(j=0;j<=y;j++)
             {
                  k=dis(0,0,i,j);
                  l=dis(x,y,i,j);
                  m=dis(0,0,x,y);

                  if(k==(m/2) && l==(m/2))
                  {
                       cout<<i<<" "<<j<<nl;
                       u=1;
                       break;
                  }
             }
             if(u) break;
        }

        if(!u) cout<<"-1 -1"<<nl;
   }


   get_lost_idiot;
}

