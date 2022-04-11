#include<stdio.h>
int main()
{
    int a,i;
    double b,c;
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        scanf("%lf %lf",&b,&c);
        if(c==0) printf("divisao impossivel\n");
        if(b==0) printf("0.0\n");
        if(b!=0 && c!=0) printf("%.1lf\n",b/c);
        }


    return 0;
}
