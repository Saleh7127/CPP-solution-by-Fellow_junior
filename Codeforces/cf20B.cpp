#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   double a,b,c,x,d,e;
   cin>>a>>b>>c;

   if(a==0 && b==0 && c==0) cout<<-1<<endl;
   else if(a==c && a==0 && b!=0)
   {
       cout<<1<<endl;
       cout<<0<<endl;
   }
   else if(a==b && b==0 || ((b*b)-(4*a*c))<0)
   {
       cout<<0<<endl;
   }
   else if(a==0 && b!=0 && c!=0)
   {
       cout<<1<<endl;
       printf("%.10lf\n",-c/b);
   }
   else
   {
       x=(b*b)-(4*a*c);
       x=sqrt(x);
       if(x==0)
       {
           cout<<1<<endl;
           printf("%.10lf\n",-b/(2*a));
       }
       else
       {
           d=(x-b)/(2*a);
           e=(-b-x)/(2*a);

           cout<<2<<endl;
           printf("%.10lf\n%.10lf\n",min(d,e),max(d,e));
       }
   }

   return 0;
}
