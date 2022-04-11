#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
ll mod=1e9+7;
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);


   test
   {

       ll n,m,i,j,k,l;

       cin>>n;

       ll a[n+5];

       for(i=0;i<n;i++)
       {
           cin>>a[i];
       }
       if(n==1)
       {
           cout<<0<<endl;
           continue;
       }
       l=n/2;
       cout<<l<<endl;
       for(i=0;l--;i+=2)
       {
           k=min(a[i],a[i+1]);
           cout<<i+1<<" "<<i+2<<" "<<k<<" "<<mod<<endl;
       }

   }

   return 0;
}
