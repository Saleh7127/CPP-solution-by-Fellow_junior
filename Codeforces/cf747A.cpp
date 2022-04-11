#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define sc(a) scanf("%lld",&a)
#define sc2(a,b) scanf("%lld %lld",&a,&b)
int main()
{
   int a,c,d,e,f,i,j,k,l,mi=1e9;
   cin>>a;
   for(i=1;i<=a;i++)
   {
       if(a%i==0)
       {
           c=abs((a/i)-i);
           if(c<mi)
           {
               mi=c;
               d=(a/i);
               e=i;
           }
       }
   }
   printf("%d %d\n",min(e,d),max(e,d));
   return 0;
}

