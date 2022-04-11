#include<stdio.h>
#include<string.h>
int main()
{
    int i,j;
    char a[1000];
    while(scanf("%[^\n]%*c",&a)!= EOF)
    {
        j=0;
        for(i=0; i<strlen(a); i++)
        {
            if(a[i]!=' ')
            {
                j++;
                if(j%2==0)
                {
                    if(a[i]>64 && a[i]<91)
                    {
                        a[i]=a[i]+32;
                    }
                    printf("%c",a[i]);
                }
                else
                {
                    if(a[i]>96 && a[i]<123)
                    {
                        a[i]=a[i]-32;
                    }
                    printf("%c",a[i]);
                }
            }
            else
                printf("%c",a[i]);
        }

        printf("\n");
    }
    return 0;
}
