#include<stdio.h>
int main()
{
    int a,b,c,i,j=0;
    scanf("%d %d %d",&a,&b,&c);
    for(i=c;i>=1;i--)
    {
        if(i-1<=b && i-2<=a)
        {
            j=(i*3)-3;
            printf("%d\n",j);
            break;
        }
    }

    return 0;
}
