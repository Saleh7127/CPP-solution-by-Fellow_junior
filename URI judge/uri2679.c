#include<stdio.h>
int main()
{
    long long int a;
    scanf("%lld",&a);
    if(a%2==0) printf("%lld\n",a+2);
     else if(a%2!=0) printf("%lld\n",a+1);
}
