/***
 created: 2022-02-06-23.49.11
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
        string a,b;

        cin>>n>>k;
        cin>>a;

        b=a;

        reverse(b.begin(),b.end());

        if(!k || b==a) cout<<1<<nl;
        else cout<<2<<nl;

   }



   get_lost_idiot;
}

