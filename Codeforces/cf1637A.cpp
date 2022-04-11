/***
 created: 2022-02-18-23.14.30
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
        ll n,m,i,j,k,l;

        cin>>n;

        vector<ll>a(n),b(n);

        for(i=0;i<n;i++)
        {
             cin>>a[i];
             b[i]=a[i];
        }

        sort(b.begin(),b.end());

        if(a==b) cout<<"NO"<<nl;
        else cout<<"YES"<<nl;
   }



   get_lost_idiot;
}

