#include<stdio.h>
int main()
{
    int a,b,c,i,d,e=0;
    while(scanf("%d",&a) != EOF)
    {
        scanf("%d %d",&b,&c);
        for(i=0; i<a; i++)
        {
            scanf("%d",&d);
            if( d>= b && d<=c )
                e++;
        }
        printf("%d\n",e);
        e=0;
    }
    return 0;
}
