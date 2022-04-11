#include<stdio.h>
int main()
{
    int a,b,c,s;
    while(scanf("%d %d %d",&a,&b,&c)!=EOF)
    {
        for( ; ; )
        {
            if(b>=(a*2) && c>=(a*4))
            {
                s=a+(a*2)+(a*4);

                break;
            }
            a=a-1;
        }
        printf("%d\n",s);
    }

    return 0;
}
