#include<stdio.h>
int main()
{
    int a,b,i;
    scanf("%d",&a);
    for(i=0; i<a; i++)
    {
        scanf("%d",&b);
        if(b==2)
            printf("2\n");
        else
        {
            if(b%2!=0)
                printf("1\n");
            else
                printf("0\n");
        }
    }
    return 0;
}
