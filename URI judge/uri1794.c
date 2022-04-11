#include<stdio.h>
int main()
{

    int a,b,c,d,e;
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    if(a>=b && a<=c && a>=d && a<=e) printf("possivel\n");
    else printf("impossivel\n");


    return 0;
}
