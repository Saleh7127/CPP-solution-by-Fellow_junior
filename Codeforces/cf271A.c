#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g,h,i,j,k;
    scanf("%d",&a);
    a=a+1;
    while(1)
    {
        b=a%10;
        c=(a/10)%10;
        d=(a/100)%10;
        e=(a/1000)%10;
        if(b!=e && b!=c && b!=d && c!=d && c!=e && d!=e)
        {
            printf("%d\n",a);
            break;

        }
        else
            a++;
    }
    return 0;
}
