#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll n;
   cin>>n;
   ll a[n+5],b,c=0,d=0,e=0,i,j,k,l;
   for(i=0;i<n;i++)
   {
       cin>>a[i];
       c+=a[i];
   }
   d+=c;
   sort(a,a+n);
   for(i=0;i<n-1;i++)
   {
       d+=c;
       c-=a[i];
   }
   cout<<d<<endl;
   return 0;
}
