#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000],b[1000],c[1000];
    int d,e,f,g,i,j,k,l,t,n,v,m,mn;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        mn=m=0;
        scanf("%d",&n);
        scanf("%s %d %d %d",&a,&d,&e,&f);
        mn=m=d*e*f;
        strcpy(b,a);
        strcpy(c,a);
        for(j=1;j<n;j++)
        {
            scanf("%s %d %d %d",&a,&d,&e,&f);
            v=d*e*f;
            if(v>m)
            {
                strcpy(b,a);
                m=v;
            }
            else if(v<mn)
            {
                strcpy(c,a);
                mn=v;
            }
        }
        if(mn==m)
        {
            printf("Case %d: no thief\n",i);
        }
        else
        {
            printf("Case %d: %s took chocolate from %s\n",i,b,c);
        }
    }
    return 0;
}
