/***
 created: 2021-10-30-15.37.59
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

        cin>>n>>k;

        k++;

        ll a[n+4];

        for(i=0;i<n;i++)
        {
             cin>>a[i];
             a[i]=pow(10,a[i]);
        }

        vector<ll>x(n+2,1e18);

        for(i=0;i<n-1;i++)
        {
             x[i]=(a[i+1]/a[i])-1;
        }

        for(i=0;i<n-1;i++)
        {
             m=min(x[i],k);
             k-=m;
             l+=(m*a[i]);
        }

        if(k>0)
        {
             l+=(k*a[i]);
        }

        cout<<l<<endl;
   }

   get_lost_idiot;
}
