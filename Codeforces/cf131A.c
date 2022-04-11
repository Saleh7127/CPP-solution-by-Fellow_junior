#include<stdio.h>
int main()
{
    char a[100];
    int i;
    gets(a);
    if(a[0]>96 && a[0]<124)
    {
        a[0]=a[0]-32;
    }
    printf("%c",a[0]);
    for(i=1; i<strlen(a); i++)
    {
        if(a[i]>64 && a[i]<91)
        {
            a[i]=a[i]+32;
        }
        printf("%c",a[i]);
    }
    printf("\n");

    return 0;
}
