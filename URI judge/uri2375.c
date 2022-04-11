#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if(a<=b && a<=c && a<=d) printf("S\n");
    else printf("N\n");

    return 0;


}
