#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define fellow_junior  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
   fellow_junior
   ll n,c,d,e,f,i,j,k,l;
   cin>>n;
   vector<ll>a(n+5);
   for(i=0;i<n;i++)
   {
       cin>>a[i];
   }
   for(i=0;i<n/2;i+=2)
   {
      swap(a[i],a[n-i-1]);
   }
   for(i=0;i<n;i++)
   {
       cout<<a[i]<<" ";
   }
   return 0;
}
