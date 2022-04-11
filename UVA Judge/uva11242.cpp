#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define sc(a) scanf("%lld",&a)
#define sc2(a,b) scanf("%lld %lld",&a,&b)
#define pf(a) printf("%lld",a)
#define loop1(i,a,c) for(i=a;i<=c;i++)
#define loop2(i,a,c) for(i=a;i<c;i++)
#define loop(i,c) for(i=0;i<c;i++)
int main()
{
   int rear[1000],frnt[1000],c,i,j,l,r,f;
   while(scanf("%d",&f) && f)
   {
       scanf("%d",&r);
       double a[1000],ma=-1000.00,k;
       loop(i,f)
       {
           cin>>frnt[i];
       }
       loop(i,r)
       {
           cin>>rear[i];
       }
       l=0;
       loop(i,r)
       {
           loop(j,f)
           {
               a[l]=(double)rear[i]/(double)frnt[j];
               l++;
           }
       }
       sort(a,a+l);
       loop(i,l-1)
       {
           k=a[i+1]/a[i];
           ma=max(k,ma);
       }
       printf("%.2lf\n",ma);
   }
   return 0;
}
