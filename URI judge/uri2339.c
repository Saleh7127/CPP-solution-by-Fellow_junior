#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d %d %d",&a,&b,&c);
    d= a*c;
    if(d<=b) printf("S\n");
    else printf("N\n");
    return 0;
}
