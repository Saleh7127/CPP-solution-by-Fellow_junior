#include<stdio.h>
int main()
{
    int i,a,b=1;
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        printf("%d %d %d\n",b,b*b,b*b*b);
        b++;

    }

    return 0;
}
