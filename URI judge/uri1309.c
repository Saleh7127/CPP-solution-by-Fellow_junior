#include<stdio.h>
#include<string.h>
int main()
{

    char e[1000];
    int r,i,j;
    for( ; ; )
    {
        r=0;
        scanf("%[^\n]%*c",e);
        if(e[0]=='*')
            break;
        for(i=0; i<strlen(e); i++)
        {
            if(e[i]>64 && e[i]<91)
            {
                e[i]=e[i]+32;
            }
        }
        for(j=0; j<strlen(e); j++)
        {
            if(e[j]==' ')
            {
                if(e[j+1]==e[0])
                    continue;
                else
                {
                    r=1;
                    break;
                }
            }

        }

        if(r==1)
            printf("N\n");
        else
            printf("Y\n");
    }

    return 0;
}
