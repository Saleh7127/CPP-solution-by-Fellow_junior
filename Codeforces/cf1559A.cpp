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

        cin>>n;

        ll a[n+4];

        for(i=0;i<n;i++) cin>>a[i];

        sort(a,a+n);

        l=a[n-1];

        for(i=0;i<n-1;i++) l&=a[i];

        cout<<l<<endl;
   }


   return 0;
}
