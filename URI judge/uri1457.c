#include<stdio.h>
int main()
{
    long long int a,b,c,d,i,j;
    char x[1000];
    scanf("%lld",&a);
    for(i=0;i<a;i++)
    {
        d=1;
        scanf("%lld%s",&b,&x);
        c=strlen(x);
        for(j=b;j>=1;j-=c)
        {
            d*=j;
        }
        printf("%lld\n",d);
    }
    return 0;
}
