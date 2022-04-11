#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define sc(a) scanf("%lld",&a)
#define sc2(a,b) scanf("%lld %lld",&a,&b)
int main()
{
   char a[100000],c[100000];
   ll i,j,k,l1,l2,m,n;
   while(scanf("%s %s",&a,&c)!=EOF)
   {
       l1=strlen(a);
       l2=strlen(c);
       m=0;
       k=0;
       for(i=0;i<l1;i++)
       {
           for(j=m;j<l2;j++)
           {
               if(a[i]==c[j])
               {
                   k++;
                   m=j+1;
                   break;
               }
           }
       }
       if(k==l1) printf("Yes\n");
       else printf("No\n");
   }
   return 0;
}

