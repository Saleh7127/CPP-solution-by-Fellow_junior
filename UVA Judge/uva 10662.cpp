#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
   ll t,r,h,i,j,k,l;
   while(cin>>t>>r>>h)
   {
       ll pt[100],pr[100],ph[100],tc[100][100],rc[100][100],hc[100][100];

       for(i=0;i<t;i++)
       {
           cin >> pt[i];
           for(j=0;j<r;j++)
           {
               cin>>tc[i][j];
           }
       }
       for(i=0;i<r;i++)
       {
           cin>>pr[i];
           for(j=0;j<h;j++)
           {
               cin>>rc[i][j];
           }
       }
       for(i=0;i<h;i++)
       {
           cin>>ph[i];
           for(j=0;j<t;j++)
           {
               cin>>hc[i][j];
           }
       }
       ll a=INT_MAX,price,c,d,e,f=0;
       for(i=0;i<t;i++)
       {
           for(j=0;j<r;j++)
           {
               for(k=0;k<h;k++)
               {
                   if(tc[i][j]==0 && rc[j][k]==0 && hc[k][i]==0)
                   {
                       f=1;
                       price=pt[i]+pr[j]+ph[k];
                       if(price<a)
                       {
                           a=price;
                           c=i;
                           d=j;
                           e=k;
                       }
                   }
               }
           }
       }
       if(!f) printf("Don't get married!\n");
       else
       {
           printf("%lld %lld %lld:%lld\n",c,d,e,a);
       }
   }
   return 0;
}
