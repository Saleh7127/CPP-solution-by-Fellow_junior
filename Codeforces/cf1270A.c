#include<stdio.h>
int main()
{
    int a,i,j,k,b,c,d,e,f,g=0,h=0;
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        g=0;
        h=0;
        scanf("%d %d %d",&b,&c,&d);
        for(j=0;j<c;j++)
        {
            scanf("%d",&e);
            if(e>g)
            {
                g=e;
            }
        }
        for(k=0;k<d;k++)
        {
            scanf("%d",&f);
            if(f>h)
            {
                h=f;
            }
        }
        if(g>h) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
