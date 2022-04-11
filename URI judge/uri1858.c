#include<stdio.h>
int main()
{
    int i,a,b,c,d;
    scanf("%d",&a);
    b=20;
    for(i = 0; i < a; i++)
    {
        scanf("%d",&c);
        if(c<b)
        {
            b=c;
            d=i+1;
        }
    }
    printf("%d\n",d);


    return 0;
}
