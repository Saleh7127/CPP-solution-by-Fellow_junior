#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define sc(a) scanf("%lld",&a)
#define sc2(a,b) scanf("%lld %lld",&a,&b)
ll a[1000000];
int main()
{
   ll c,d=0,e,f,i,j,k,l;
   a[1]=0;
   for(i=1,j=8,k=3;k<500005;i++,j+=8,k+=2)
   {
       d=d+(i*j);
       a[k]=d;
   }
   test
   {
       sc(c);
       printf("%lld\n",a[c]);
   }
   return 0;
}

