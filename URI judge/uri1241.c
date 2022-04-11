#include<stdio.h>
int main()
{
    int a,i,c,d,j,k,g;
    char e[10000],f[10000];
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        g=0;
        c=0;
        d=0;
        scanf("%s %s",e,f);
        c= strlen(e);
        d= strlen(f);
        if(d>c)
        {
            g=1;
        }
        for(j=d,k=c;j>=0;j--,k--)
        {
            if(f[j]==e[k])
            {
                g++;
            }
            else break;
        }
        if(g==d+1) printf("encaixa\n");
        else  printf("nao encaixa\n");
    }
    return 0;
}
