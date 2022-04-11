/***
 created: 2021-10-30-22.26.43
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
        ll n,m,i,j,k,l,x,y;

        cin>>x>>y;

        if(y%x==0) cout<<x<<nl;
        else if(y>=x)
        {
             m=y-(y%x);

             cout<<(m+y)/2<<nl;
        }
        else cout<<x+y<<endl;
   }

   get_lost_idiot;
}

