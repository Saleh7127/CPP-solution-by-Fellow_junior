#include<stdio.h>
int main()
{
    int a,b,c,i,s=0;
    scanf("%d %d %d",&a,&b,&c);
    for(i=1;i<=c;i++){
        s = s+(i*a);
    }

    printf("%d\n",s-b);
}
