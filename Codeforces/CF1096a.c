#include<stdio.h>
int main()
{
    long long a,b,i;
    scanf("%lld",&a);
    long long int c;
    for(i=0;i<a;i++)
    {
        scanf("%lld %lld",&b,&c);
        if(b*3<=c)
        {
            printf("%lld %lld\n",b,b*3);
        }
       if(b*3>c)
        {
            printf("%lld %lld\n",b,b*2);
        }
    }
    return 0;
}
