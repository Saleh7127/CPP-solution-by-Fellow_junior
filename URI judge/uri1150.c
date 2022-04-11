#include<stdio.h>
int main()
{
    int a,b,i,j=0,c,s=0;
    scanf("%d",&a);
    for( ; ; )
    {
        scanf("%d",&b);
        if(b>a) break;
    }
    for(i=a; i<b; i++)
    {
        s+=i;
        if(s>b) break;
        j++;
    }

    printf("%d\n",j+1);

    return 0;
}
