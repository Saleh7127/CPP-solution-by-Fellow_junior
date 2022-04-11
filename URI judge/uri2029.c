#include<stdio.h>
int main()
{
    double a,b,r,h,ar,pi;
    while(scanf("%lf %lf",&a,&b) != EOF)
    {
        pi= 3.14;
        r= b/2.0;
        h = pi*r*r ;
        ar = a/h;
        printf("ALTURA = %.2lf\nAREA = %.2lf",ar,h);
    }

    return 0;
}
