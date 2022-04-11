#include<bits/stdc++.h>
using namespace std;
double b,c,d,d1=0,d2=0,v1,v2,v3,a1,a2,t1=0,t2=0,t=0;
int main()
{
    int a,i;
    scanf("%d",&a);
    for(i=1; i<=a; i++)
    {

        scanf("%lf %lf %lf %lf %lf",&v1,&v2,&v3,&a1,&a2);
        d1=(v1*v1)/(2.0*a1);
        d2=(v2*v2)/(2.0*a2);
        d=d1+d2;
        t1=v1/a1;
        t2=v2/a2;
        t=max(t1,t2)*v3;
        printf("Case %d: %.9lf %.9lf\n",i,d,t);
    }
    return 0;
}
