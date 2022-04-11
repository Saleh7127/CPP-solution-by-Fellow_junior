#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    for( ; ; )
    {
        scanf("%d %d %d",&a,&b,&c);
        if(a==0 && b==0 & c==0) break;
        int d= cbrt(a*b*c);
        printf("%d\n",d);
    }
        return 0;
    }
