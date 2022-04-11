#include<stdio.h>
int main()
{
    long long int a,b,c,d,i;
    scanf("%lld",&a);

    for(i=1;i<=a;i++)
    {
        d=0;
        scanf("%lld %lld",&b,&c);
        d=(b*c)/2;
        printf("Case %lld: %lld\n",i,d);

    }

    return 0;
}
