#include<stdio.h>
int main()
{
    long long int i,a,s=0;
    scanf("%lld",&a);
    for(i=1; i<=a; i++)
    {
        if(i%2==0)
        {
            s+=i;
        }
        if(i%2!=0)
        {
            s+=(i*(-1));
        }
    }
    printf("%lld\n",s);

    return 0;
}
