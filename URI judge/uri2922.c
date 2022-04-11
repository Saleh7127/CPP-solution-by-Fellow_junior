#include<stdio.h>
int main()
{
    int a,b,c,d;
    while(scanf("%d %d",&a,&b) != EOF)
    {
        c = a-(b+1);
        d = b-(a+1);
        if(a>b)
            printf("%d\n",c);
          else if(a==b)
            printf("%d\n",a-b);
        else if(a<b)
            printf("%d\n",d);
    }
    return 0;
}
