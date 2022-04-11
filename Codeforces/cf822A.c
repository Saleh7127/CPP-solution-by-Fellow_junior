#include<stdio.h>
int main()
{
    long long int a,b,c,d=1,i;
    scanf("%lld %lld",&a,&b);
    if(a>b)
    {
        c=b;
    }
    else
    {
        c=a;
    }
    for(i=1;i<=c;i++)
    {
        d*=i;
    }
    printf("%lld\n",d);

    return 0;
}
