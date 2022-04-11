#include<stdio.h>
int main()
{
    int a,i,b,c=0,d=0;
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        scanf("%d",&b);
        if(b==0) c++;
        if(b==1) d++;
    }
    if(c>d) printf("Y\n");
    else printf("N\n");
}
