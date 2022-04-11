#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    char c[105];
    scanf("%s",&c);
    int l =  strlen(c);
    for(i=0;i<l;i++)
    {
        if(c[i]>64 && c[i]<91)
        {
            c[i]= c[i]+ 32 ;
        }
        if(c[i]!='a' && c[i]!='e' && c[i]!='i' && c[i]!='o' && c[i]!='u' && c[i]!='y')
        {
            printf(".%c",c[i]);
        }
    }

    printf("\n");


    return 0;
}
