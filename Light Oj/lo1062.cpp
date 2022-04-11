#include <bits/stdc++.h>
using namespace std;
double x,y,h,lo,hi,midd,ans;
double bisection(double mid)
{
    double h1=sqrt((x*x)-(mid*mid));
    double h2=sqrt((y*y)-(mid*mid));
    double xx=(h1*h2)/(h1+h2);
    return xx;
}

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   int t,i,j;
   scanf("%d",&t);
   for(i=1;i<=t;i++)
   {
       scanf("%lf %lf %lf",&x,&y,&h);
       lo=0.00;
       hi=min(x,y);
       j=32;
       while(j--)
       {
           midd=(lo+hi)/2;
           ans=bisection(midd);
           if(ans==h)
           {
               break;
           }
           else if(ans>h)
           {
               lo=midd;
           }
           else hi=midd;
       }
       printf("Case %d: %.10lf\n",i,midd);
   }
   return 0;
}
