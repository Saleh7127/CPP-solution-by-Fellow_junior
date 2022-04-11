#include<stdio.h>

int main()
{
    int a,b,c,d=0,e=0;
    scanf("%d",&a);
    for(int i=0;i<a;i++)
    {
        scanf("%d %d",&b,&c);
        d = d-b;
        d = d+c;
        if(d>e) e=d;
    }
    printf("%d\n",e);


    return 0;
}
