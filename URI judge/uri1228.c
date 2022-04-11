#include<stdio.h>
int main()
{
    int n,s=0;
    int a1,b1,c1,d1,e1;
    int a2,b2,c2,d2,e2;
    while( scanf("%d",&n)!= EOF)
    {
        s=0;
        scanf("%d %d %d %d %d",&a1,&b1,&c1,&d1,&e1);
        scanf("%d %d %d %d %d",&a2,&b2,&c2,&d2,&e2);
        if(a2>a1)
            s+=(a2-a1);
        if(b2>b1)
            s+=(b2-b1);
        if(c2>c1)
            s+=(c2-c1);
        if(d2>d1)
            s+=(d2-d1);
        if(e2>e1)
            s+=(e2-e1);
        printf("%d\n",s);
    }

    return 0;
}
