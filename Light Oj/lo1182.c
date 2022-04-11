#include<stdio.h>
int main()
{
    long long int a,b,i,j,c=0,d=0;
    while(scanf("%lld",&a)!=EOF)
    {
        for(i=1; i<=a; i++)
        {
            d=0;
            scanf("%lld",&b);
            while(b!=0)
            {
                c=b%2;
                d+=c;
                b=b/2;
            }
            if(d%2==0)
                printf("Case %lld: even\n",i);
            else
                printf("Case %lld: odd\n",i);


        }
    }

    return 0;
}
