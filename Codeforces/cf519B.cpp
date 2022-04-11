#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define pi acos(-1)
int main()
{
   ll a[200000],c,d=0,e=0,f=0,i,j,k,l;
   cin>>c;
   for(i=0;i<c;i++)
   {
       cin>>a[i];
       d+=a[i];
   }
   for(i=0;i<c-1;i++)
   {
       cin>>a[i];
       e+=a[i];
   }
   for(i=0;i<c-2;i++)
   {
       cin>>a[i];
       f+=a[i];
   }
   printf("%lld\n%lld",d-e,e-f);
   return 0;
}
