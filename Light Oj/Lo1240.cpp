#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
struct cordinate
{
    double x,y,z;
};


cordinate a[3];

double distance(cordinate p, cordinate q)
{
    return sqrt((p.x-q.x)*(p.x-q.x)+(p.y-q.y)*(p.y-q.y)+(p.z-q.z)*(p.z-q.z));
}

double ternary()
{

    cordinate b,c;

    ll r=100;

    while(r--)
    {
        b.x=(2*a[0].x+a[1].x)/3.00;
        c.x=(a[0].x+2*a[1].x)/3.00;

        b.y=(2*a[0].y+a[1].y)/3.00;
        c.y=(a[0].y+2*a[1].y)/3.00;

        b.z=(2*a[0].z+a[1].z)/3.00;
        c.z=(a[0].z+2*a[1].z)/3.00;

        if(distance(b,a[2])>distance(c,a[2]))
        {
            a[0]=b;
        }
        else a[1]=c;

    }
    return (distance(b,a[2])+distance(c,a[2]))/2.00;

}

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   test
   {
       ll i,j,k;
       for(i=0;i<3;i++)
       {
           cin>>a[i].x>>a[i].y>>a[i].z;
       }

       cout<<"Case "<<cs<<": "<<fixed<<setprecision(10)<<ternary()<<endl;

   }

   return 0;
}
