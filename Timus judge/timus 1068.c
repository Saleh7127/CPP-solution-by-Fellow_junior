#include<stdio.h>
int main()
{
    int a,i,s=0;
    scanf("%d",&a);
    if(a>0)
    {
        for(i=1; i<=a; i++)
        {
            s+=i;
        }
        printf("%d\n",s);
    }
    if(a<0)
    {
        for(i=1; i>=a; i--)
        {
            s+=i;
        }
        printf("%d\n",s);
    }
    if(a==0)
    {
        printf("1\n");
    }

    return 0;
}
