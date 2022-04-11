#include<stdio.h>
#include<string.h>
int main()
{
    int a,i;
    char b[1000];

    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        scanf("%s",&b);
        int len = strlen(b);
        if(len>10) printf("%c%d%c\n",b[0],len-2,b[len-1]);
        else printf("%s\n",b);
    }
}
