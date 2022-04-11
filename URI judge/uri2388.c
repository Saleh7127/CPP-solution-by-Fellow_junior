#include<stdio.h>
int main()
{
    int a,i,b,c,sum=0;
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        scanf("%d %d",&b,&c);
        sum+= (b*c);
    }
    printf("%d\n",sum);
    return 0;
}
