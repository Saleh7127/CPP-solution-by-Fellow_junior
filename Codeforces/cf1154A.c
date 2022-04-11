#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if(d>=a && d>=b && d>=c)
    {
        printf("%d ",d-c);
        printf("%d ",d-b);
        printf("%d\n",d-a);
    }
    else if(b>=a && b>=d && b>=c)
    {
        printf("%d ",b-c);
        printf("%d ",b-d);
        printf("%d\n",b-a);
    }
    else if(c>=a && c>=b && c>=d)
    {
        printf("%d ",c-d);
        printf("%d ",c-b);
        printf("%d\n",c-a);
    }
    else if(a>=d && a>=b && a>=c)
    {
        printf("%d ",a-c);
        printf("%d ",a-b);
        printf("%d\n",a-d);
    }

    return 0;
}
