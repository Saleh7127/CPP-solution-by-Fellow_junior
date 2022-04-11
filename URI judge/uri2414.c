#include<stdio.h>
int main()
{
    int a,b=0;
    for( ; ; )
    {
        scanf("%d",&a);
        if(a==0) break;
         if(a>b) b=a;

    }
     printf("%d\n",b);
     return 0;
}
