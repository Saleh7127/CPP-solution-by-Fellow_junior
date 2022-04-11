#include<stdio.h>
int main()
{
    double a,i,b,c,d=0,e=0;
    scanf("%lf",&a);
    for(i=0;i<a;i++)
    {
        scanf("%lf %lf",&b,&c);
        if(c>d){
            d=c;
            e=b;
        }
    }
    if(d>=8) printf("%.0lf\n",e);
    else printf("Minimum note not reached\n");

    return 0;
}
