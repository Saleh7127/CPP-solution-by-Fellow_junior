#include<stdio.h>
int main()
{
    long long int a,b,temp,d;
    for( ; ; )
    {
        scanf("%lld %lld",&a,&b);
        if(a==0 && b==0)
            break;
        if(a>b)
        {
            temp=a;
            a=b;
            b=temp;
        }
        d=a-(b-a);

        printf("%lld\n",d);
    }


    return 0;
}
