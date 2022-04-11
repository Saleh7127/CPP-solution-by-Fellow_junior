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
        ll n,m,i,j,k,l=INT_MAX;

        cin>>n;

        ll a[n+4],b[n+4];

        for(i=0;i<n;i++) cin>>a[i];
        for(i=0;i<n;i++) cin>>b[i];

        if(a[0]<b[0]) l=0;

        for(i=1;i<n;i++)
        {
             b[i]=max(b[i],b[i-1]);
        }

        for(i=0;i<n;i++)
        {
             k=lower_bound(b,b+n,a[i])-b;
             l=min(l,k+i);
        }

        cout<<l<<endl;

   }


   return 0;
}
