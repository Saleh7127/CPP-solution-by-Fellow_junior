#include<stdio.h>
int main()
{
    long long int a,b,c,d,e,i;
    scanf("%lld",&c);
    for(i=0; i<c; i++)
    {
        e=0;
        d=0;
        scanf("%lld %lld",&a,&b);
        if(a<b)
            printf("nao encaixa\n");

        if(a>=b)
        {
            while(b!=0)
            {
                if(a%10==b%10)
                    e++;
                a/=10;
                b/=10;
                d++;
            }
            if(e==d) printf("encaixa\n");
            else printf("nao encaixa\n");
       }


    }
    return 0;
}
