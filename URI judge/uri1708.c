#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d %d",&a,&b);
    a=abs(a-b);
    if(b%a==0) printf("%d\n",b/a);
    else printf("%d\n",b/a+1);
    return 0;
}
