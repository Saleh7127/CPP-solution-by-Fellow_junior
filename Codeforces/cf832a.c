#include<stdio.h>
int main()
{
    long long int a,b,c;
    scanf("%lld %lld",&a,&b);
    c=a/b;
    if(c%2!=0)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
