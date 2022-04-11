#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   test
   {

        ll n,m,i,j,k,l=0;
        cin>>n;
        ll a[n+4];

        for(i=0;i<n;i++) cin>>a[i];

        l+=(a[0]+a[n-1]);

        for(i=0;i<n-1;i++)
        {
             l+=abs(a[i]-a[i+1]);
        }

        for(i=0;i<n;i++)
        {
             if(i>0) j=a[i-1];
             else j=0ll;

             if(i<n-1) k=a[i+1];
             else k=0ll;

             m=a[i]-max(j,k);
             l-=max(m,0ll);
        }
        cout<<l<<endl;
   }

   return 0;
}
