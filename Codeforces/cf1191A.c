#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a%4==1) printf("0 A\n");
    else if(a%4==2) printf("1 B\n");
    else if(a%4==3) printf("2 A\n");
    else if(a%4==0) printf("1 A\n");

    return 0;
}
