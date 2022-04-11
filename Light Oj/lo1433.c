#include <stdio.h>
#include <math.h>
int main()
{
    int a,i,j,k;
    double arc=0.0,theta=0.0,x1,x2,x3,y1,y2,y3,ba=0.0,ob=0.0,oa=0.0;
    scanf("%d",&a);
    for(i=1; i<=a; i++)
    {
        scanf("%lf %lf %lf %lf %lf %lf",&x1,&y1,&x3,&y3,&x2,&y2);
        ba=sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3));
        ob=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
        oa=sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
        theta=acos(((ob*ob)+(oa*oa)-(ba*ba))/(2.0*ob*oa));
        arc=ob*theta;

        printf("Case %d: %lf\n",i,arc);
    }
    return 0;
}
