#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a%4==0 || a%7==0 || a%44==0 || a%47==0 || a%74==0 || a%77==0 || a%444==0 || a%447==0 || a%474==0 || a%477==0 || a%744==0 || a%747==0 || a%774==0 || a%477==0 )
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
