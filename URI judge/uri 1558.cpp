#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{


   ll n,m,i,j,l;

   while(scanf("%lld",&n)!=EOF)
   {
       m=0;
       for(i=0;i*i<=n;i++)
       {
           l=n-(i*i);
           j=sqrt(l);
           if(j*j==l)
           {
               printf("YES\n");
               m=1;
               break;
           }
       }

       if(m==0) printf("NO\n");
   }

   return 0;
}
