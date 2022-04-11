#include<stdio.h>
int main()
{
    int i,a,b,c,d=0,e=0;
    for( ; ; )
    {
        scanf("%d",&a);
       if(a==0) break;
        for(i=0; i<a; i++)
        {
            scanf("%d %d",&b,&c);
            if(b>c)
                d++;
            else if(b<c)
                e++;
        }
        printf("%d %d\n",d,e);
        d=0;
        e=0;


    }
    return 0;
}
