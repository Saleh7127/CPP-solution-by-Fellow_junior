#include<stdio.h>
int main()
{

    int i,a,b,d=0;
    scanf("%d %d",&a,&b);
    for(i=1; i<=b; i++)
    {
        d++;
        if(d==a)
            printf("%d",i);
        else
            printf("%d ",i);
        if(d==a)
        {
            d=0;
            printf("\n");
        }

    }
   return 0;
}
