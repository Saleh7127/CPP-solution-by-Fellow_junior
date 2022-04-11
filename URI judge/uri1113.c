#include<stdio.h>
int main()
{
    int a,b;
    for( ; ; ){
            scanf("%d %d",&a,&b);
        if(a==b) break;
        if(a>b) printf("Decrescente\n");

        else printf("Crescente\n");
    }
    return 0;
}
