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
   ll a[100000],n,m,c[100000],d,e,f,i,j,k,l;
   while(cin>>n>>m &&n &&m)
   {
       loop(i,n)
       {
           cin>>a[i];
       }
       loop(i,m)
       {
           cin>>c[i];
       }
       sort(a,a+n);
       sort(c,c+m);
       k=0;
       l=0;
       for(j=0;j<m;j++)
       {
           if(c[j]>=a[k])
           {
               l+=c[j];
               k++;
           }
           if(k==n) break;
       }
       if(k<n ) printf("Loowater is doomed!\n");
       else printf("%lld\n",l);
   }
   return 0;
}
