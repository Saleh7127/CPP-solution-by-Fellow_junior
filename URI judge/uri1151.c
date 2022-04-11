#include<stdio.h>
int main()
{

    int a,i,ar[1000];
    scanf("%d",&a);
    ar[0]=0;
    ar[1]=1;
    for(i=2;i<a;i++)
        ar[i]=ar[i-1]+ar[i-2];
    printf("0");
    for(i=1;i<a;i++)
        printf(" %d",ar[i]);
        printf("\n");
    return 0;
}
