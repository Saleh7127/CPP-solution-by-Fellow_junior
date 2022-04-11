#include<stdio.h>
int main()
{
    int d,a,b,c,i;
    scanf("%d",&d);
    for(i=0; i<d; i++)
    {
        scanf("%d %d %d",&a,&b,&c);
        if(a<10)
        {
            printf("0%d:",a);
        }
        else
        {
            printf("%d:",a);
        }
        if(b<10)
        {
            printf("0%d",b);
        }
        else
        {
            printf("%d",b);
        }
        if(c==0)
            printf(" - A porta fechou!\n");
        else
            printf(" - A porta abriu!\n");
    }
    return 0;
}
