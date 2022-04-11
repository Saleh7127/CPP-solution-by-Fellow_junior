#include<stdio.h>
int main()
{
    int n,a,b,x,y,t,p;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d %d %d %d",&a,&b,&x,&y);
        if(a<b)
        {
           t=a;
           a=b;
           b=t;
        }
        if(x<y)
        {
            p=x;
            x=y;
            y=p;
        }
        if(a<x && b<y) printf("S\n");
        else printf("N\n");
    }
    return 0;
}
