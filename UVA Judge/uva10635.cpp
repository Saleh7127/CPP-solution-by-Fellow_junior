/***
 created: 2022-02-16-02.07.44
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
        ll n,m,i,j,l,p,q;
        cin>>n>>p>>q;

        ll a[n*n + 2]={0};

        for(i=1;i<=p+1;i++)
        {
             cin>>m;
             a[m]=i;
        }

        multiset<ll>x;

        for(i=1;i<=q+1;i++)
        {
             cin>>m;

             x.insert(a[m]);

             auto k=x.upper_bound(a[m]);

             if(k!=x.end()) x.erase(k);
        }

        cout<<"Case "<<cs<<": "<<x.size()<<nl;
   }


   get_lost_idiot;
}
