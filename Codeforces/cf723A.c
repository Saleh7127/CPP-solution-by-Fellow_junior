#include<stdio.h>
int main()
{
    int a,b,c,d=0,e,f;
    scanf("%d %d %d",&a,&b,&c);
    if((a>=b && a<=c) ||(a>=c && a<=b))
    {
        d=b-c;
        if(d<0)
        {
            d=d*(-1);
        }
    }
    else if((b>=a && b<=c) ||(b>=c && b<=a))
    {
        d=a-c;
        if(d<0)
        {
            d=d*(-1);
        }
    }
    else if((c>=b && c<=a) ||(c>=a && c<=b))
    {
        d=b-a;
        if(d<0)
        {
            d=d*(-1);
        }
    }
    printf("%d\n",d);

}
