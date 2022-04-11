#include<stdio.h>
int main()
{
    char a[1000],b[1000];
    int i,j,re;
    gets(a);
    gets(b);
    for(i=0;i<strlen(a);i++)
    {
        if(a[i]>64 && a[i]<91)
        {
            a[i]=a[i]+32;
        }
        if(b[i]>64 && b[i]<91)
        {
            b[i]=b[i]+32;
        }
    }
    re= strcmp(a,b);
    if(re==0) printf("0\n");
    if(re<0) printf("-1\n");
    if(re>0) printf("1\n");

    return 0;
}
