#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a==3)
    {
        printf("1 1 1\n");
    }
    else if((a-3)%3==0)
    {
        printf("1 1 %d\n",a-2);
    }
    else
    {
        printf("1 2 %d\n",a-3);
    }
    return 0;
}
