#include<stdio.h>
#include<string.h>
int main()
{
    int b,i,j,k,l;
    char a[1000];
    scanf("%d",&b);
    for(i=0;i<b;i++)
    {
        l=0;
        scanf("%s",&a);
        l = strlen(a);
        if(i>0) printf(" ");
        if(a[0]=='U' && a[1]=='R' && l==3)
        {
            printf("URI");
        }
       else if(a[0]=='O' && a[1]=='B' && l==3)
        {
            printf("OBI");
        }
         else printf("%s",a);
    }
    printf("\n");
    return 11707127;
}
