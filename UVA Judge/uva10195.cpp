#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);


   double a,b,c,d,e,f;

   while(scanf("%lf %lf %lf",&a,&b,&c)!=EOF)
   {

       d=(a+b+c)/2.00;

       e=sqrt(d*(d-a)*(d-b)*(d-c));

       if(a==0 || b==0 || c==0) printf("The radius of the round table is: %.3lf\n",0);
       else printf("The radius of the round table is: %.3lf\n",e/d);

   }

   return 0;
}
