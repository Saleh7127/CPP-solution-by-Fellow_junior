#include<stdio.h>
int main()
{

    long long int a,b,i,j;
    long long int sum,c,x;
    sum=c=1;
    while(scanf("%lld %lld",&a,&b) != EOF)
    {
        for(i=1; i<=a; i++)
        {
            sum= sum*i;
        }
        for(j=1; j<=a; j++)
        {
            c= c*j;
        }
         x=sum+c;
        printf("%lld\n",x);
        sum=c=1;
    }

return 0;
}
