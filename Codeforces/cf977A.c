#include<stdio.h>
int main()
{
    long long int a,b,i;
    scanf("%lld %lld",&a,&b);
    for(i=0; i<b; i++)
    {
        if(a%10==0)
            a=a/10;
        else
            a=a-1;
    }
    printf("%lld",a);

    return 0;
}
