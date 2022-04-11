#include <stdio.h>
int main()
{
    unsigned long long b;
    int a[10000],c,d,e,f,i,j=0,k,l;
    scanf("%llu",&b);
    if(b==0)
    {
        printf("10\n");
    }
    else if(b==1)
    {
        printf("1\n");
    }
    else if(b>1 && b<10)
    {
        printf("%d\n",b);
    }
    else
    {
        for(i=9;i>=2;i--)
        {
            while(b%i==0)
            {
                a[j]=i;
                j++;
                b=b/i;
            }
        }
        if(b!=1)
        {
            printf("-1\n");
        }
        else
        {
            for(i=j-1;i>=0;i--)
            {
                printf("%d",a[i]);
            }
        }
    }
    return 0;
}
