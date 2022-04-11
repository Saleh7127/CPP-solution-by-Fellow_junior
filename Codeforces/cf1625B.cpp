/***
 created: 2022-01-13-22.12.13
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
        ll n,m,i,j,k,l=-1;

        cin>>n;

        ll a[n+4];

        map<ll,ll>x;

        for(i=1;i<=n;i++)
        {
             cin>>m;
             if(x[m])
             {
                  l=max(l,x[m]+n-i);
             }
             x[m]=i;
        }
        cout<<l<<nl;
   }



   get_lost_idiot;
}
