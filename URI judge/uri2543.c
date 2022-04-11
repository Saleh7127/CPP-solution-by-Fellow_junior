#include<stdio.h>
int main()
{
    int a,b,i,c,d,e=0;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
        e=0;
        for(i=0; i<a; i++)
        {
            scanf("%d %d",&c,&d);
            if(c==b && d==0)
                e++;
        }
        printf("%d\n",e);
    }
}
