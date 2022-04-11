#include<stdio.h>
int main()
{
    int i,j;
    double a=0.0;
    scanf("%d",&j);
    for(i=0;i<j;i++)
    {
        a+=6.00;
        a=1.00/a;
    }
    a+=3.00;
    printf("%.10lf\n",a);


    return 0;
}
