#include<stdio.h>
int main()
{
    int a[15],c,n,i,j,k,l,x;
    scanf("%d",&x);
    for( i=1; i<=x; i++)
    {
        for(j=0; j<=10; j++)
        {
            a[j]=0;
        }
        scanf("%d",&n);
        for(j=1; j<=n; j++)
        {
            l=j;
            while(l!=0)
            {
                k=l%10;
                a[k]++;
                l=l/10;
            }
        }
        for(j=0; j<10; j++)
        {
            printf("%d",a[j]);
            if(j<9)
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}

