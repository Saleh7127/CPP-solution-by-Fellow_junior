#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,i,j;
    char d[1000];
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        scanf("%s",&d);
        scanf("%d",&b);
        for(j=0;j<strlen(d);j++)
        {
            if(d[j]>=65 && d[j]<=90)
            {
                d[j]=d[j]-b;
                if(d[j]<65)
                {
                    d[j]=d[j]+26;
                }
            }
            printf("%c",d[j]);
        }
        printf("\n");
    }
    return 0;
}
