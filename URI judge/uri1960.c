#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g,h,i,j;
    scanf("%d",&a);
    b=a/500;
    c=(a%500)/100;
    d=((a%500)%100)/50;
    e=(((a%500)%100)%50)/10;
    f=((((a%500)%100)%50)%10)/5;
    g=(((((a%500)%100)%50)%10)%5)/1;
    for(i=0;i<b;i++)
    {
        printf("D");
    }
    for(i=0;i<c;i++)
    {
        printf("C");
    }
    for(i=0;i<d;i++)
    {
        printf("L");
    }
    for(i=0;i<e;i++)
    {
        printf("X");
    }
    for(i=0;i<f;i++)
    {
        printf("V");
    }
    for(i=0;i<g;i++)
    {
        printf("I");
    }
    printf("\n");
    return 0;
}
