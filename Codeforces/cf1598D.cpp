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
        ll n,m,i,j,k,l,ans;

        cin>>n;

        ll a[n+4],b[n+4];

        map<ll,ll>x,y;

        for(i=0;i<n;i++)
        {
             cin>>a[i]>>b[i];

             x[a[i]]++;
             y[b[i]]++;
        }

        ///ans= nC3 - bad count;

        ans=n*(n-1)*(n-2)/6;

        for(i=0;i<n;i++)
        {
             ans-=(x[a[i]]-1)*(y[b[i]]-1);
        }

        cout<<ans<<endl;
   }

   return 0;
}
