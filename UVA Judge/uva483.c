#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000];
    int i,j,k,l,m,n;
    while(gets(a))
    {
        l=strlen(a);
        k=-1;
        for(i=0; i<l; i++)
        {
            if(a[i]==' ')
            {
                for(j=i-1; j>k; j--)
                {
                    printf("%c",a[j]);
                }
                printf(" ");
                k=i;
            }
        }
        for(n=l-1; n>k; n--)
        {
            printf("%c",a[n]);
        }
        printf("\n");
    }
    return 0;
}

