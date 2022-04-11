
#include<stdio.h>
#include<math.h>
int main()
{

    double n,a,b,c,d;
    scanf("%lf",&n);
    a =(1+sqrt(5))/2.0;
    b =(1-sqrt(5))/2.0;
    c= pow(a,n)-pow(b,n) ;
    d= c/sqrt(5);

    printf("%.1lf\n",d);


    return 0;
}

