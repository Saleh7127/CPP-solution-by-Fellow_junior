#include<stdio.h>
int main()
{
   long long int i,a,b,c,d;
    scanf("%lld",&d);
    for(i=0;i<d;i++)
    {
        scanf("%lld %lld %lld",&a,&b,&c);
        printf("%lld\n",(a+b+c)/2);
    }
    return 0;
}
