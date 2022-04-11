#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define fellow_junior  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
   fellow_junior

   int a[100000],c,d,e,f,i,j,k,l,x;
   while(cin>>c)
   {
       for(i=0;i<c;i++)
       {
           cin>>a[i];
       }
       cin>>d;
       sort(a,a+c);
       k=1e9;
       for(i=0;i<c;i++)
       {
           for(j=i;j<c;j++)
           {
               e=abs(a[j]-a[i]);
               x=a[i]+a[j];
               if(x==d && e<k)
               {
                   f=a[i];
                   l=a[j];
                   k=e;
               }
           }
       }
       printf("Peter should buy books whose prices are %d and %d.\n",f,l);
       printf("\n");
   }


   return 0;
}
