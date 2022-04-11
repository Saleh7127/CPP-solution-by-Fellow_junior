#include<stdio.h>
int main()
{
    char a[120];
    int i,l;
    gets(a);
    for(i=0; i<strlen(a); i++)
    {
        if(a[i]>='0' && a[i]<='9')
            printf("%c",a[i]);
            else printf("\n");
    }
    printf("\n");

    return 0;
}
