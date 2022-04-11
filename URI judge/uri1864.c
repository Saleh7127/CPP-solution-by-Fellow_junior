#include<stdio.h>
int main()
{
    int a,b;
    char ar[1000]="LIFE IS NOT A PROBLEM TO BE SOLVED, BUT A REALITY TO BE EXPERIENCED";
    while(scanf("%d",&a) != EOF){
    for(b=0;b<a;b++){
        printf("%c",ar[b]);
    }
    }
    printf("\n");
    return 0;
}
