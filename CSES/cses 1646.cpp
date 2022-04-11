#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll n,m,i,j,k,l;

   cin>>n>>m;

   ll a[n+5];

   a[0]=0;
   cin>>a[1];

   for(i=2;i<=n;i++)
   {
       cin>>a[i];
       a[i]+=a[i-1];
   }
   while(m--)
   {
       cin>>k>>l;

       cout<<a[l]-a[k-1]<<endl;
   }
   return 0;
}
