#include<stdio.h>
int main()
{
    char a[120];
    int i,l;
    gets(a);
    for(i=0;i<strlen(a);i++)
    {
        if(a[i]==',')
            printf("\n");
        else printf("%c",a[i]);
    }
    printf("\n");

    return 0;
}
