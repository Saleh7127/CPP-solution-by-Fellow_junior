#include<stdio.h>
int main()
{
    int a,i,N[10];
    scanf("%d",&a);
    for(i=0;i<10;i++){
        printf("N[%d] = %d\n",i,a);
        a += a;
    }

    return 0;
}
