#include<stdio.h>
int main()
{
    int a,i,X[10];
    for(i=0; i<10; i++)
    {
        scanf("%d",&a);
        if(a<=0) a=1;
        printf("X[%d] = %d\n",i,a);

    }

    return 0;

}
