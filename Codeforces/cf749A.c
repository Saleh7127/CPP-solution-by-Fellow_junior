#include<stdio.h>
int main()
{
    int a,b,c,i;
    scanf("%d",&a);
    c=a/2;
    printf("%d\n",c);
    if(a%2==0)
    {
        for(i=0;i<c;i++)
        {
            printf("2 ");
        }
    }
    if((a-1)%2==0)
    {
        for(i=0;i<c-1;i++)
        {
            printf("2 ");
        }
        printf("3");
    }
    printf("\n");
}
