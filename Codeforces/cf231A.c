#include<stdio.h>
int main()
{
    int a,b,c,d,e,f=0,i;
    scanf("%d",&a);
    for(i=0;i<a;i++){
        scanf("%d %d %d",&b,&c,&d);
        e= b+c+d;
        if(e>=2) f++;
    }
    printf("%d\n",f);

    return 0;
}
