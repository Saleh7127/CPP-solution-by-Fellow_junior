#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   test
   {
        ll n,m,i,j,k,l;

        cin>>n>>k;

        ll a[n+4];

        for(i=1;i<=n;i++)
        {
             cin>>a[i];
        }

        l=-1e17;

        for(i=n;i>=n-k;i--)
        {
             for(j=1;j<i;j++)
             {
                  m=(i*j)-k*(a[i]|a[j]);
                  l=max(l,m);
             }
        }

        cout<<l<<endl;
   }


   return 0;
}
