#include<stdio.h>
int main()
{
    int a,b,c,d=0,e=0,i,j,k;
    scanf("%d",&a);
    for(i=0; i<a; i++)
    {
        scanf("%d %d",&c,&b);
        if(c!=0 && b!=0)
        {
            d+=(c+b);
        }
        else
        {
           e+=(c+b);
        }
    }
    printf("%d\n",d);
    return 0;
}
