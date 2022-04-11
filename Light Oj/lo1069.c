#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d",&a);
    for(int i=1; i<=a; i++)
    {
        d=0;
        scanf("%d %d",&b,&c);
        if(b<=c)
        {
            d=(c*4)+19;
            printf("Case %d: %d\n",i,d);
        }
        else if(b>c)
        {
            d=(b*4)+19+(b-c)*4;
            printf("Case %d: %d\n",i,d);
        }

    }

    return 0;
}
