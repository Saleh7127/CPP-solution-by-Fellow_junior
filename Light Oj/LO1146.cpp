#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)

struct point
{
    double x,y;
};

double dis(point a,point b)
{
    return sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y));
}

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);


   test
   {

       point z[5];

       ll i,j,k,l=100;

       for(i=0;i<4;i++)
       {
           cin>>z[i].x>>z[i].y;
       }

       double ac,bd;

       while(l--)
       {
           point a,b,c,d;

           a.x=(2*z[0].x+z[1].x)/3.00;
           a.y=(2*z[0].y+z[1].y)/3.00;

           c.x=(2*z[2].x+z[3].x)/3.00;
           c.y=(2*z[2].y+z[3].y)/3.00;

           b.x=(z[0].x+2*z[1].x)/3.00;
           b.y=(z[0].y+2*z[1].y)/3.00;

           d.x=(z[2].x+2*z[3].x)/3.00;
           d.y=(z[2].y+2*z[3].y)/3.00;


           ac=dis(a,c);
           bd=dis(b,d);

           if(ac>bd)
           {
               z[0]=a;
               z[2]=c;
           }
           else
           {
               z[1]=b;
               z[3]=d;
           }

       }

       cout<<"Case "<<cs<<": ";
       cout<<fixed<<setprecision(10)<<(ac+bd)/2.00<<endl;

   }

   return 0;
}
