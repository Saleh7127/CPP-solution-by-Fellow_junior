#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,c,i,j,k;
    char x[10000];
    char s[]="abcdefghijklmnopqrstuvwxyz";
    scanf("%d",&a);
    for(i=0; i<a; i++)
    {
        c=0;
        gets(x);
        for(j=0; j<26; j++)
        {
            for(k=0; k<strlen(x); k++)
            {
                if(s[j]==x[k])
                {
                    c++;
                    break;
                }
            }
        }
        if(c==26)
            printf("frase completa\n");
        else
        {
            if(c>13)
                printf("frase quase completa\n");
            else
                printf("frase mal elaborada\n");
        }
    }

    return 0;
}
