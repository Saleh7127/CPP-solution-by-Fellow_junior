#include<stdio.h>
int main()
{

    int i,a;
    for(i=0;i<1000000;i++)
    {
        scanf("%d",&a);
        if(a==2002){
            printf("Acesso Permitido\n");
            break;
        }
        if(a!=2002)
            printf("Senha Invalida\n");
    }

    return 0;
}
