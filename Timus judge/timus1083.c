#include<stdio.h>
#include<string.h>
int main()
{
    int a,i,b=1;
    char ch[100];
    scanf("%d %s",&a,&ch);
    for(i=a;i>1;i--)
    {
       int l=strlen(ch);
        b=b*i;
        i=i-(l-1);
    }
    printf("%d",b);
}
