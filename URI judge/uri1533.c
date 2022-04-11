#include<stdio.h>
int main()
{
    int a,b,c,i;
    for( ; ; )
    {
        c=0;
        scanf("%d",&a);
        if(a==0)
        break;
        for(i=0; i<a; i++)
        {
            scanf("%d",&b);
            if(b==a)
            {
                c=i;
            }

        }
        printf("%d\n",c+1);
    }
}
