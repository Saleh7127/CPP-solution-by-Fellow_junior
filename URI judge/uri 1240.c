#include<stdio.h>
int main()
{
    int c,i;
    long long int a,b;
    scanf("%d",&c);
    for(i=0; i<c; i++)
    {
        scanf("%lld %lld",&a,&b);
        if(a>0 && b>0)
        {
            if(a%10 == b%10)
                printf("encaixa\n");
            else
                printf("nao encaixa\n");
        }

    }
    return 0;
}
