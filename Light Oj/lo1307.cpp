#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define fellow_junior  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
   fellow_junior

   ll t,k;
   cin>>t;
   for(k=1;k<=t;k++)
   {
       ll a[20000],c,d,e=0,f,i,j,l;
       cin>>c;
       for(i=0;i<c;i++)
       {
           cin>>a[i];
       }
       sort(a,a+c);
       for(i=0;i<c-2;i++)
       {
           for(j=i+1;j<c-1;j++)
           {
               d=upper_bound(a,a+c,a[i]+a[j]-1)-a-j-1;
               e+=d;
           }
       }
       printf("Case %lld: %lld\n",k,e);
   }
   return 0;
}
