#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define pi acos(-1)
int main()
{
   ll n,a[200000],c,d,e,f,i,j,k,l;
   cin>>n;
   for(i=0;i<n;i++)
   {
       cin>>a[i];
   }
   cin>>c;
   sort(a,a+n);
   while(c--)
   {
       cin>>d;
       l=upper_bound(a,a+n,d)-a;
       cout<<l<<endl;
   }
   return 0;
}
