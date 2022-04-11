#include<stdio.h>
int e=0;
int main()
{
    int a[10000],b[1000],c,d,e,f,i,j,k,l,t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&c,&d);
        for(i=1; i<=c; i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=1; i<=d; i++)
        {
            scanf("%d",&a[i]);
        }
        for(j=1,k=1; j<=c; j++)
        {
            if(j==b[k])
            {
                k++;
                if(a[j]>a[j+1])
                {
                    f=a[j];
                    a[j]=a[j+1];
                    a[j+1]=f;
                }
            }
        }
        for(l=1; l<=c-1; l++)
        {
            if(a[l]>a[l+1])
            {
                e++;
            }
        }
        if(d==0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}

