#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,j,k,l;
    double a,b,c,area,a1,a2,a3,ag,r1,r2,r3,pori,s;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>r1>>r2>>r3;
        a=r1+r2;
        b=r2+r3;
        c=r3+r1;
        pori=a+b+c;
        s=pori/2;
        area=sqrt(s*(s-a)*(s-b)*(s-c));
        a1=.5*r1*r1*acos((c*c+a*a-b*b)/(2*c*a));
        a2=.5*r2*r2*acos((b*b+a*a-c*c)/(2*b*a));
        a3=.5*r3*r3*acos((b*b+c*c-a*a)/(2*b*c));
        ag=area-a1-a2-a3;
        printf("Case %d: %.10lf\n",i,ag);
    }
    return 0;
}
