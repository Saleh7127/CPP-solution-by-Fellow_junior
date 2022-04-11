/***
 created: 2021-10-25-22.54.02
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define nl '\n'

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   test
   {
        ll n,q,m,i,j,k,l;

        cin>>n;

        ll a[n+4];

        ll f[n+2][2004];

        for(i=0;i<n;i++)
        {
             cin>>a[i];
             f[i][0]=a[i];
        }


        for(i=1;i<=n;i++)
        {
            map<ll,ll>x;

            for(j=0;j<n;j++) x[a[j]]++;

            for(j=0;j<n;j++)
            {
                 a[j]=x[a[j]];
            }
            for(j=0;j<n;j++)
            {
                 f[j][i]=a[j];
            }
        }

        cin>>q;

        while(q--)
        {
             cin>>k>>l;

             if(l>n) l=n;

             k--;

             cout<<f[k][l]<<nl;
        }
   }



   return 0;
}
