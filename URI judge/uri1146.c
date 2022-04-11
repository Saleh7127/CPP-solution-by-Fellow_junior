#include<stdio.h>
int main()

{

    int i,a;
    for( ; ; )
    {
        scanf("%d",&a);
        if(a==0) break;
        printf("1");
        for(i=2;i<=a;i++)
        printf(" %d",i);
        printf("\n");


    }

    return 0;
}
