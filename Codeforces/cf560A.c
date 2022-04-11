#include<stdio.h>
int main()
{
    int b,a,i,c,s=0;
    scanf("%d",&b);
    for(i=0; i<b; i++)
    {
        scanf("%d",&a);
        if(a==1)
        {
            printf("-1\n");
            goto shomoikharap;
        }
    }
    printf("1\n");
    shomoikharap:;
    return 0;
}
