#include<stdio.h>
int main()
{
    int a,b,c,i;
    scanf("%d",&c);
    for(i=0;i<c;i++)
    {
        scanf("%d %d",&a,&b);
        if((a*b)%2!=0) printf("%d\n",(a*b)/2+1);
         if((a*b)%2==0) printf("%d\n",(a*b)/2);
    }
    return 0;
}
