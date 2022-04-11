#include<stdio.h>
int main()
{
    long long int a,b,c,t,d,e,l,n,s;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld %lld %lld %lld",&a,&b,&n,&s);
        if(s<=((n*a)+b) && (s%n)<=b)
           printf("YES\n");
        else
           printf("NO\n");
    }
    return 0;
}
