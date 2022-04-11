#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    if(a>=0 && a<=432 && b>=0 && b<=468)
        printf("dentro\n");
    else
        printf("fora\n");
    return 0;
}
