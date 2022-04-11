#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define sc(a) scanf("%lld",&a)
#define pf(a) printf("%lld",a)
#define sc2(a,b) scanf("%lld %lld",&a,&b)
int main()
{
   int x,t,a[10000],c,d,e,f,i,j,n,k,l;
   cin>>t;
   for(x=1;x<=t;x++)
   {
       c=1;
       cin>>n>>k;
       for(i=0;i<n;i++)
       {
           cin>>a[i];
       }
       sort(a,a+n);
       for(i=1;i<n;i++)
       {
           if(a[i]-a[i-1]>k)
           {
               c++;
           }
       }
       printf("Case #%d: %d\n",x,c);
   }
   return 0;
}
