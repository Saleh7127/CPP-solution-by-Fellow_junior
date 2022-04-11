#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000];
    int i,b,c;
    while(scanf("%s",&a) != EOF)
    {
        scanf("%d",&b);
        for(i=0;i<b;i++){
                scanf("%d",&c);
            printf("%c",a[c-1]);
        }
        printf("\n");
    }

    return 0;
}

