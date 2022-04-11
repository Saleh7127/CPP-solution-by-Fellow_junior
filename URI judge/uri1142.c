#include<stdio.h>
int main()

{

    int i,a,b,c,x;
    scanf("%d",&x);
        a=1;
        b=2;
        c=3;
    for(i=0;i<x;i++)
    {

        printf("%d %d %d PUM\n",a,b,c);
        a+=4;
        b+=4;
        c+=4;

    }

   return 0;
}
