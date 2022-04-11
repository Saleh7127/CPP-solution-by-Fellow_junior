#include <stdio.h>
#include <string.h>
int main()
{
    int a,i;
    char b[100],c[100];
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        scanf("%s",&b);
        scanf("%s",&c);
        if(b[1]=='e' && c[1]=='e')
            printf("Sem ganhador\n");
        else if(b[1]=='t' && c[1]=='t')
            printf("Aniquilacao mutua\n");
        else if(b[1]=='a' && c[1]=='a')
            printf("Ambos venceram\n");
        else if(b[1]=='t' || (b[1]=='e' && c[1]=='a'))
            printf("Jogador 1 venceu\n");
        else
            printf("Jogador 2 venceu\n");
    }
    return 0;
}
