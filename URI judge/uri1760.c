#include<stdio.h>
int main()
{
    double a,b,c;
    double d;
    while(scanf("%lf",&a)!=EOF)
    {
        d=1.442307692;
        b=a*a;
        printf("%.2lf\n",b/d);
    }
    return 0;
}
