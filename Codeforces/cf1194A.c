#include<stdio.h>
int main()
{
    int a,b,c,i;
    scanf("%d",&a);
    for(i=0; i<a; i++)
    {
        scanf("%d %d",&b,&c);
        printf("%d\n",c*2);
    }
    return 0;
}
