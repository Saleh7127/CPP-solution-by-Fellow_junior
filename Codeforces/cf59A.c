#include<stdio.h>
int main()
{
    int i,j=0,k=0,l,m;
    char a[500];
    scanf("%s",&a);
    for(i=0;i<strlen(a);i++)
    {
        if(a[i]>64 && a[i]<91) j++;
        if(a[i]>96 && a[i]<123) k++;
    }
    if(j>k)
    {
        for(l=0;l<strlen(a);l++)
        {
            if(a[l]>96 && a[l]<123)
            {
                a[l]=a[l]-32;
            }
            printf("%c",a[l]);
        }
    }
    else
    {
        for(m=0;m<strlen(a);m++)
        {
            if(a[m]>64 && a[m]<91)
            {
                a[m]=a[m]+32;
            }
            printf("%c",a[m]);
        }
    }
    printf("\n");
    return 0;
}
