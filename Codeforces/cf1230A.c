#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    e=a+b;
    f=c+d;
    g=a+c;
    h=b+d;
    i=a+d;
    j=b+c;
    k=a+c+d;
    l=a+b+c;
    m=b+c+d;
    n=a+b+d;
    if(e==f || g==h || i==j || k==b || l==d || m==a || n==c)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
