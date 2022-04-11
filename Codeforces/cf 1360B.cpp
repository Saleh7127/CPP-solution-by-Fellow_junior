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
   test
   {
       int a[10000],c,d=1000000,e,f,i,j,k,l;
       cin>>c;
       for(i=0;i<c;i++)
       {
           cin>>a[i];
       }
       sort(a,a+c);
       for(i=0;i<c-1;i++)
       {
           e=a[i+1]-a[i];
           if(e<d)
           {
               d=e;
           }
       }
       cout<<d<<endl;
   }

   return 0;
}
