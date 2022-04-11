#include<stdio.h>
int main()
{
    int a,b=0,c=0,d=0,e,f=0,j;
    scanf("%d",&a);
    b=(a*a*a);
    c=(6*a*a);
    d=(23*a);

    f = (a/24)*(b-c+d-18);
    printf("%d\n",f+1);

    return 0;
}
