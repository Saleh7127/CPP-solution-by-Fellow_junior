#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    scanf("%d %d",&a,&b);
    c=a;
    for( ; ; )
    {
        d= a/b;
        c+=d;
        e=a%b;
        a=d+e;
        if(a<b) break;
    }
    printf("%d\n",c);
    return 0;
}
