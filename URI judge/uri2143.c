#include<stdio.h>
int main()
{
    int a,i,b;
    for( ; ; )
    {
        scanf("%d",&a);
    if(a==0) break;
        for(i=0;i<a;i++)
        {
            scanf("%d",&b);
           if(b%2==0) printf("%d\n",(2*b)-1);
           else printf("%d\n",(2*b)-2);
        }
    }


    return 0;
}

