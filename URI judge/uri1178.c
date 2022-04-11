#include<stdio.h>
int main()
{

    int i;
    double a;
    scanf("%lf",&a);
    for(i=0; i<100; i++)
    {

        printf("N[%d] = %.4lf\n",i,a);
        a /= 2;
    }
    return 0;
}
