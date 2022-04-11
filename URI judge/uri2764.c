#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d/%d/%d",&a,&b,&c);
    if(b<10)
        printf("0");
    printf("%d/", b);
    if(a<10)
        printf("0");
    printf("%d/", a);
    if(c<10)
        printf("0");
    printf("%d\n", c);
    if(c<10)
        printf("0");
    printf("%d/", c);
    if(b < 10)
        printf("0");
    printf("%d/", b);
    if(a < 10)
        printf("0");
    printf("%d\n", a);
    if(a < 10)
        printf("0");
    printf("%d-", a);
    if(b < 10)
        printf("0");
    printf("%d-", b);
    if(c < 10)
        printf("0");
    printf("%d\n", c);


    return 0;
}
