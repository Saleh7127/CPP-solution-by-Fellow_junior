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

        ll n,m,i,j,k,l;

        cin>>n;

        map<ll,ll>x;
        ll a[n+12];

        for(i=0;i<n;i++) cin>>a[i];

        l=0;
        for(i=n-1;i>=0;i--)
        {
             l+=(x[a[i]]*(i+1));
             x[a[i]]+=(n-i);
        }
        cout<<l<<endl;

   }

   return 0;
}
