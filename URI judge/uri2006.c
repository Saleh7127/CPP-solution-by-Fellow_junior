#include<stdio.h>
int main()
{
    int a,i,b,s=0;
    scanf("%d",&a);
    for(i=0;i<5;i++)
    {
        scanf("%d",&b);
        if(a==b) s++;
    }
    printf("%d\n",s);
    return 0;

}
