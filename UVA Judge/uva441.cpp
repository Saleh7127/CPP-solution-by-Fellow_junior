#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define sc(a) scanf("%lld",&a)
#define pf(a) printf("%lld",a)
#define sc2(a,b) scanf("%lld %lld",&a,&b)
int main()
{
   int a[1000],c,d=1,e,f,i,j,k,l,m,n;
   while(sc(c)==1 && c)
   {
       if(d>1) printf("\n");
       for(i=0;i<c;i++)
       {
           cin>>a[i];
       }
       for(i=0;i<c-5;i++)
       {
           for(j=i+1;j<c-4;j++)
           {
               for(k=j+1;k<c-3;k++)
               {
                   for(l=k+1;l<c-2;l++)
                   {
                       for(m=l+1;m<c-1;m++)
                       {
                           for(n=m+1;n<c;n++)
                           {
                               printf("%d %d %d %d %d %d\n",a[i],a[j],a[k],a[l],a[m],a[n]);
                           }
                       }

                   }
               }
           }
       }
       d++;
   }
   return 0;
}
