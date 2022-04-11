#include<stdio.h>
int main()
{
    int c,i,j,k;
    char a[1000],b[1000];
    scanf("%d",&c);
    for(i=0; i<c; i++)
    {
        scanf("%s %s",a,b);
        if (a == b)
            printf("empaten\n");

        else if (a == 'tesoura' && b == 'papel')
            printf("rajeshn\n");
        else if (b == "tesoura" && a == "papel")
            printf("sheldonn\n");

        else if (a == "papel" && b == "pedra")
            printf("rajeshn\n");
        else if (b == "papel" && a== "pedra")
            printf("sheldonn\n");

        else if (a == "pedra" && b == "lagarto")
            printf("rajeshn\n");
        else if (a == "lagarto" && b == "pedra")
            printf("sheldonn\n");

        else if (a == "lagarto" && b == "spock")
            printf("rajeshn\n");
        else if (a == "spock" && b == "lagarto")
            printf("sheldonn\n");

        else if (a == "spock" && b == "tesoura")
            printf("rajeshn\n");
        else if (b == "spock" && a == "tesoura")
            printf("sheldonn\n");

        else if (a== "tesoura" && b== "lagarto")
            printf("rajeshn\n");
        else if (b == "tesoura" && a == "lagarto")
            printf("sheldonn\n");

        else if (a == "lagarto" && b == "papel")
            printf("rajeshn\n");
        else if (a == "papel" && b == "lagarto")
            printf("sheldonn\n");

        else if (a == "papel" && b == "spock")
            printf("rajeshn\n");
        else if (a == "spock" && b == "papel")
            printf("sheldonn\n");

        else if (a == "spock" && b == "pedra")
            printf("rajeshn\n");
        else if (a == "pedra" && b == "spock")
            printf("sheldonn\n");

        else if (a == "pedra" && b == "tesoura")
            printf("rajeshn\n");
        else if (b == "pedra" && a == "tesoura")
            printf("sheldonn\n");
    }
    return 1;
}
