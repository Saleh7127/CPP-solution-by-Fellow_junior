#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    scanf("%d",&a);
    for(int i=0; i<a; i++)
    {
        scanf("%d %d",&b,&c);
        d=1440 - (b*60)-c;
        printf("%d\n",d);
    }
    return 0;
}
