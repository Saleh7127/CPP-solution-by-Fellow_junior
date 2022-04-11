#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll n,m,i,j,k=0,l=0;

   cin>>n>>m;

   map<ll,ll>x;

   ll a[n+6];

   x[0]=1;

   for(i=0;i<n;i++)
   {
       cin>>a[i];
   }

   for(i=0;i<n;i++)
   {
        l+=a[i];

       if(x.find(l-m)!=x.end()) k+=(x[l-m]);

       x[l]++;
   }

   cout<<k<<endl;


   return 0;
}

