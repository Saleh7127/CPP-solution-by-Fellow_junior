#include<stdio.h>
int main()
{
    long long int a,b,c,d,e,f,g,h,i,j,s=0;
    scanf("%lld",&a);
    b=a/100;
    s+=b;
    c=a%100;
    d=c/20;
    s+=d;
    e=c%20;
    f=e/10;
    s+=f;
    g=e%10;
    h=g/5;
    s+=h;
    i=g%5;
    j=i/1;
    s+=j;
    printf("%lld\n",s);
    return 0;
}
