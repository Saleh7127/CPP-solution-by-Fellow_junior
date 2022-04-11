#include<stdio.h>
#include<string.h>
int main()
{
    char s[1001];
    int a,b;
    while(scanf("%s",s) != EOF){
        scanf("%d",&a);
        while(a--){
                scanf("%d",&b);
            printf("%c",s[b-1]);
        }
        printf("\n");
    }
    return 0;
}
