#include<stdio.h>

int main()
{
    int a,b,t;
    scanf("%d",&t);
    int n,m;
    while(t--)
    {
     scanf("%d %d",&a,&b);
        double lg=log10(a);
     printf("%lf",lg);
    }
}
