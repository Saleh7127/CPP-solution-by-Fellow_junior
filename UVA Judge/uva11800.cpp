#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)

struct point{

   ll x,y;
};

point c[200];


double dal(point a, point b)
{
     return (double)(b.y-a.y)/(double)(b.x-a.x);
}

ll dis(point a,point b)
{
     return ((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y));
}

bool check(point a,point b,point c)
{
     ll dall=(b.y-a.y)*(c.x-b.x)-(b.x-a.x)*(c.y-b.y);

     return dall>0;
}

void swapp(point &a,point &b)
{
     point ss;
     ss=a;
     a=b;
     b=ss;
}

void sortt()
{
     for(ll i=0;i<=3;i++)
     {
          if(check(c[0],c[1],c[2])==1)
          {
               if(check(c[1],c[2],c[3])==1)
               {
                    if(check(c[0],c[1],c[3])==1)
                    {
                         break;
                    }
                    else swapp(c[1],c[3]);
               }
               else swapp(c[2],c[3]);
          }
          else swapp(c[1],c[2]);
     }
}


int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);



   test
   {
        for(ll i=0;i<4;i++)
        {
             cin>>c[i].x>>c[i].y;
        }

        sortt();

        ll a,b,cc,d,e,f;

        a=dis(c[0],c[1]);
        b=dis(c[1],c[2]);
        cc=dis(c[2],c[3]);
        d=dis(c[0],c[3]);
        e=dis(c[0],c[2]);
        f=dis(c[1],c[3]);

        cout<<"Case "<<cs<<": ";

        if(a==b && b==cc && cc==d)
        {
             if(e==f) cout<<"Square"<<endl;
             else cout<<"Rhombus"<<endl;
        }

        else if(a==cc && b==d  && cc!=d)
        {
             if(e==f) cout<<"Rectangle"<<endl;
             else cout<<"Parallelogram"<<endl;
        }

        else
        {
             if((dal(c[0],c[1])==dal(c[3],c[2])) || (dal(c[0],c[3])==dal(c[1],c[2])))
             {
                  cout<<"Trapezium"<<endl;
             }
             else cout<<"Ordinary Quadrilateral"<<endl;
        }
   }
   return 0;
}
