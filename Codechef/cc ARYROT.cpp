#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define sc(a) scanf("%lld",&a)
#define sc2(a,b) scanf("%lld %lld",&a,&b)
#define pf(a) printf("%lld",a)
#define loop1(i,a,c) for(i=a;i<=c;i++)
#define loop(i,c) for(i=0;i<c;i++)
int main()
{
   ll a[100005],c,d,e,f,i,j,k,l;
   test
   {
       cin>>c>>d;
       for(i=0;i<c;i++)
       {
           cin>>a[i];
       }
       e=c-d;
       for(i=e;i<c;i++)
       {
           printf("%lld ",a[i]);
       }
       for(j=0;j<e;j++)
       {
          if(j<(e-1)) printf("%lld ",a[j]);
          else printf("%lld\n",a[j]);
       }
   }
   return 0;
}
