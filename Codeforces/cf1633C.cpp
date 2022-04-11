/***
 created: 2022-01-31-20.57.42
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
        ll a,w,h,d,hm,dm,n,m,i,j,k,l,x,y,z,ans=0;

        cin>>h>>d;
        cin>>hm>>dm;
        cin>>k>>w>>a;

        for(i=0;i<=k;i++)
        {
             n=h+(i*a);
             m=d+((k-i)*w);

             x=hm/m;

             if(hm%m) x++;

             y=n/dm;

             if(n%dm) y++;

             if(x<=y)
             {
                  ans=1;
                  break;
             }
        }

        if(ans) cout<<"YES"<<nl;
        else cout<<"NO"<<nl;
   }

   get_lost_idiot;
}

