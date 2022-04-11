#include<stdio.h>
int main()

{
    int i;
    double a,b;
    a=0;
    b=1.0;
    for(i=1;i<=100;i++)
    {
        a+=(1/b);
        b++;
    }
    printf("%.2lf\n",a);
    return 0;
}
