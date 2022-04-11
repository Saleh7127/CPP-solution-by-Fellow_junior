#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
ll a[1000006],x[1000006];

ll ans(ll n)
{
    if(x[n]!=-1) return x[n];
    if(n==0) return 0;
    if(n==1) return a[n];

    x[n]=max(ans(n-1),ans(n-2)+n*a[n]);

    return x[n];
}

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);


   memset(x,-1,sizeof x);

   ll n,m,i,j,k,l=0;

   cin>>n;
   for(i=0;i<n;i++)
   {
       cin>>k;
       a[k]++;
       l=max(l,k);
   }
   cout<<ans(l)<<endl;
   return 0;
}
