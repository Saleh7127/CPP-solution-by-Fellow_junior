#include<stdio.h>
int main()
{

    double a,b,c,d;
    scanf("%lf %lf",&a,&b);
    c= b-a;
    d = (c*100.00)/a;
    printf("%.2lf%%\n",d);
    return 0;

}
