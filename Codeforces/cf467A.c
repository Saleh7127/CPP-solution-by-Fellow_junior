#include<stdio.h>
int main()
{
    int i,a,b,c,d=0,e;
    scanf("%d",&a);
    for(i=0; i<a; i++)
    {
        scanf("%d %d",&b,&c);
        e= c-b;
        if(e>=2)
            d++;
    }

    printf("%d\n",d);

    return 0;
}
