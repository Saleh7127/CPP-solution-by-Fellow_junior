/***
 created: 2022-01-20-12.03.00
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

        string s;

        ll a[n+4];

        for(i=0;i<n;i++) cin>>a[i];
        cin>>s;

        vector<ll>x,y;

        for(i=0;i<n;i++)
        {
             if(s[i]=='1') x.push_back(a[i]);
             else y.push_back(a[i]);
        }

        sort(x.begin(),x.end());
        sort(y.begin(),y.end());

        ll b[n+4];

        for(auto d:y)
        {
             b[d]=++l;
        }

        for(auto d:x)
        {
             b[d]=++l;
        }

        for(i=0;i<n;i++) cout<<b[a[i]]<<" ";

        cout<<nl;
   }



   get_lost_idiot;
}
