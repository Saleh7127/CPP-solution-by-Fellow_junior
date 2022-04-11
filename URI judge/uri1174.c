#include<stdio.h>
int main()
{

    int i;
    double a,A[100];
    for(i=0; i<100; i++)
    {

        scanf("%lf",&a);
        if (a<=10) printf("A[%d] = %.1lf\n",i,a);
        else continue;
    }
    return 0;
}
