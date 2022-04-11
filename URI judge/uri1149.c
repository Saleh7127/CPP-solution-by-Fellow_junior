#include<stdio.h>
int main()
{
    int a,b,c=0,d,i,j,k;
    scanf("%d %d",&a,&b);
    while(b<=0)
    {
        scanf("%d",&b);
    }
    for(i=0;i<b;i++)
    {
        c+=(a+i);
    }
    printf("%d",c);

    return 0;

}
