#include<stdio.h>
int main()
{
    int i,a,b,c=0;
    for(i=1;i<=100;i++)
    {
        scanf("%d",&a);
        if(a>c)
            {
            c=a;
            b=i;
        }
    }
    printf("%d\n%d\n",c,b);
    return 0;
}
