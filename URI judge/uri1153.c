#include<stdio.h>
int main()
{

    int a,i,x=1;
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        x=(x*i);
    }
    printf("%d\n",x);
    return 0;
}
