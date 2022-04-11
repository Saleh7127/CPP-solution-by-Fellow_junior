#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e,r1,r2,h,p,i,j;
    double r,v,vl,PI;
    cin>>a;


    PI =acos(-1);
    for(i=1; i<=a; i++)
    {
        cin>>r1>>r2>>h>>p;
        r=r2+(r1-r2)*(double(p)/h);
        v=(1/3.0)*PI*p*(r*r+r*r2+r2*r2);
        printf("Case %d: %lf\n",i,v);
    }
    return 0;
}
