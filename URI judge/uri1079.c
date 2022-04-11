#include<stdio.h>
int main()
{
    int a,i;
    double x,y,z,avg;
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        scanf("%lf %lf %lf",&x,&y,&z);
        avg = ((x*2)+(y*3)+(z*5))/10;
        printf("%.1lf\n",avg);


    }
    return 0;
}
