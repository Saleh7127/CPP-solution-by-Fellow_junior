#include<stdio.h>
int main()
{
    int a,b,c,d,i,j;
    scanf("%d",&a);
    for(i=1; i<=a; i++)
    {
        d=0;
        scanf("%d",&b);
        for(j=0; j<b; j++)
        {
            scanf("%d",&c);
            if(c>0) d+=c;
        }
        printf("Case %d: %d\n",i,d);
    }
    return 0;
}
