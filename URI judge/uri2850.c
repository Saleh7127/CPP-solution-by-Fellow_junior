#include<stdio.h>
#include<string.h>
int main()
{
    char a[]="esquerda";
    char b[]="direita";
    char c[]="nenhuma";
    char d[]="as duas";
    char e[100];
    while( scanf("%[^\n]%*c",&e)!=EOF )
    {
        if(strcmp(e,a)==0)
            printf("ingles\n");

        else if(strcmp(e,b)==0)
            printf("frances\n");

        else if(strcmp(e,c)==0)
            printf("portugues\n");

        else if(strcmp(e,d)==0)
            printf("caiu\n");
    }

    return 0;
}

