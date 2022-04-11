#include<stdio.h>
int main()
{
    int a,b,c,d,p,q;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    p=a*b;
    q=c*d;
    if(p==q) printf("0\n");
    else if(p>q) printf("-1\n");
    else printf("1\n");
    return 0;
}
