#include<stdio.h>
int main()
{
    int b,i;
    char a[1010];
    scanf("%d",&b);
    for(i=0;i<b;i++)
    {
        scanf("%s",&a);
        if(strlen(a)==5) printf("3\n");
        else if(strlen(a)==3)
        {
            if((a[0]=='o' && a[1]=='n') || (a[0]=='o' && a[2]=='e') || (a[1]=='n' && a[2]=='e'))
            printf("1\n");

            else printf("2\n");
        }
    }
    return 0;
}
