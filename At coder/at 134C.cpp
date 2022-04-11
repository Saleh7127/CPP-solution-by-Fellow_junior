#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
ll n,a[200005],c[200005],d,e,i,j,k,l;
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   cin>>n;
   for(i=0;i<n;i++)
   {
       cin>>a[i];
       c[i]=a[i];
   }

   sort(c,c+n);
   for(i=0;i<n;i++)
   {
       if(a[i]==c[n-1]) cout<<c[n-2]<<endl;
       else cout<<c[n-1]<<endl;
   }
   return 0;
}
