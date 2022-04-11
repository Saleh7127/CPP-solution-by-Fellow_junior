#include<stdio.h>
int main()
{
    long long int a,b;
    scanf("%lld",&a);
    while(a!=0)
    {
        b=a%10;
        printf("%lld",b);
        a=a/10;
    }
    printf("\n");
    return 0;
}
