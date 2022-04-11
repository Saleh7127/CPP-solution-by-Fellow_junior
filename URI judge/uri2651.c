#include<stdio.h>
#include<string.h>
int main()
{
    int i,j=0,k;
    char a[11000];
    scanf("%[^\n]%*c",a);
    k= strlen(a);
    for(i=0; i<k; i++)
    {
        if(a[i]>=65 && a[i]<=90)
        {
             a[i]=a[i]+32;
        }
    }
    for(i=0; i<k; i++)
    {
        if(a[i]=='z' && a[i+1]=='e' && a[i+2]=='l' && a[i+3]=='d' && a[i+4]=='a')
        {
            j=1;
        }
    }
    if(j>0)
        printf("Link Bolado\n");
    else
        printf("Link Tranquilo\n");

    return 0;
}
