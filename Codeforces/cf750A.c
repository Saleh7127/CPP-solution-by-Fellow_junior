#include<stdio.h>
int main()
{
    int a,b,i,c=0,d,f=0;
    scanf("%d %d",&a,&b);
    d=240-b;
    for(i=0; i<a+1; i++)
    {
        c+=(i*5);
        if(c>d)
            break;

    }
    printf("%d\n",i-1);

    return 0;

}
