/***
 created: 2021-11-13-23.58.32
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

        map<ll,ll>x;

        for(i=0;i<n;i++)
        {
             cin>>a[i];
        }

        if(n<=2)
        {
             cout<<0<<nl;
             continue;
        }

        sort(a,a+n);

        for(i=0;i<n;i++)
        {
             if(i>x[a[i]]) x[a[i]]=i;
        }

        for(i=0;i<n-2;i++)
        {
            k=upper_bound(a,a+n,a[i]+2)-a;

            j=k-i-2;

            l+=(j*(j+1))/2;

        }

        cout<<l<<nl;
   }


   get_lost_idiot;
}

