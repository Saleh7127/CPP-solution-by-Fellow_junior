
#include<stdio.h>
int main()
{
    int x;
    double y=0,z=0,a;
    for( ; ; )
        {
        scanf("%d",&x);
        if(x<0)break;
        if(x>=0)z++;
        y+=x;
        a=y/z;
    }
    printf("%.2lf\n",a);
    return 0;
}
