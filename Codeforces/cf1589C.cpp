/***
 created: 2021-11-14-21.25.01
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
        ll n,m,i,j,k,l=0;

        cin>>n;

        ll a[n+4];
        ll b[n+4];

        for(i=0;i<n;i++) cin>>a[i];
        for(i=0;i<n;i++) cin>>b[i];

        sort(a,a+n);
        sort(b,b+n);
        for(i=0;i<n;i++)
        {
             if(b[i]-a[i]==0 || b[i]-a[i]==1) continue;
             else l=1;
        }

        if(l) cout<<"NO"<<nl;
        else cout<<"YES"<<nl;

   }



   get_lost_idiot;
}
