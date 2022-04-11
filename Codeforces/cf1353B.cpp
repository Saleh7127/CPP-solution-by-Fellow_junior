#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define sc(a) scanf("%lld",&a)
#define sc2(a,b) scanf("%lld %lld",&a,&b)
int main()
{
   ll n,a[10000],c[10000],d,e,f,i,j,k,l,m;
   test
   {
       d=0;
       f=0;
       m=0;
       cin>>n>>k;
       for(i=0;i<n;i++)
       {
           cin>>a[i];
           d+=a[i];
       }
       for(i=0;i<n;i++)
       {
           cin>>c[i];
       }
       sort(a,a+n);
       sort(c,c+n,greater<int>());
       if(a[0]>=c[0] || k==0)
       {
           printf("%lld\n",d);
       }
       else
       {
           e=0;
           for(i=0;i<n;i++)
           {
               if(m==k) break;
               for(j=e;j<n;j++)
               {
                   if(c[j]>a[i])
                   {
                       a[i]=c[j];
                       e=j+1;
                       m++;
                       break;
                   }
               }
           }
           for(l=0;l<n;l++)
           {
               f+=a[l];
           }
           printf("%lld\n",f);
       }
   }
   return 0;
}

