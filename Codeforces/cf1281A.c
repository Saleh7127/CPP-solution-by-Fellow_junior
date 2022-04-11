#include<stdio.h>
int main()
{
    int i,b,c;
    char a[1000];
    scanf("%d",&b);
    for(i=0; i<b; i++)
    {
        scanf("%s",a);
        c=strlen(a);
        if(a[c-1]=='o' && a[c-2]=='p')
            printf("FILIPINO\n");
        if(a[c-1]=='u' && a[c-2]=='s' && a[c-3]=='e' && a[c-4]=='d' )
            printf("JAPANESE\n");
        if(a[c-1]=='u' && a[c-2]=='s' && a[c-3]=='a' && a[c-4]=='m' )
            printf("JAPANESE\n");
        if(a[c-1]=='a' && a[c-2]=='d' && a[c-3]=='i' && a[c-4]=='n' && a[c-5]=='m' )
            printf("KOREAN\n");
    }

    return 0;
}
