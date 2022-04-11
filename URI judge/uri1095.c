#include<stdio.h>
int main()
{
    int a,b;
    for(a=60,b=1;a>=0;a-=5,b+=3)
    {
        printf("I=%d J=%d\n",b,a);
    }
    return 0;
}
