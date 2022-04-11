#include<stdio.h>
int main()
{

    double i,a=3.0,b=2.0,x=1.0;
    for(i=a;i<=39;i+=2.0){

        x+=(i/b);
        b=(b+b);


    }
    printf("%.2lf\n",x);

    return 0;
}
