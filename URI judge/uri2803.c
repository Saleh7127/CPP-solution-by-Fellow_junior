#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    int i,j=0;
    scanf("%s",&a);
    for(i=0; i<strlen(a); i++)
    {
        if(a[i]=='r' && a[i+1]=='o' && a[i+2]=='r' && a[i+3]=='a' && a[i+4]=='i' && a[i+5]=='m' && a[i+6]=='a')
        {
            j=1;
            break;
        }
        if(a[i]=='a' && a[i+1]=='c' && a[i+2]=='r' && a[i+3]=='e')
        {
            j=1;
            break;
        }
        if(a[i]=='a' && a[i+1]=='m' && a[i+2]=='a' && a[i+3]=='p' && a[i+4]=='a')
        {
            j=1;
            break;
        }
        if(a[i]=='a' && a[i+1]=='m' && a[i+2]=='a' && a[i+3]=='z' && a[i+4]=='o' && a[i+5]=='n' && a[i+6]=='a' && a[i+7]=='s')
        {
            j=1;
            break;
        }
        if(a[i]=='p' && a[i+1]=='a' && a[i+2]=='r' && a[i+3]=='a')
        {
            j=1;
            break;
        }
        if(a[i]=='r' && a[i+1]=='o' && a[i+2]=='n' && a[i+3]=='d' && a[i+4]=='o' && a[i+5]=='n' && a[i+6]=='i' && a[i+7]=='a')
        {
            j=1;
            break;
        }
        if(a[i]=='t' && a[i+1]=='o' && a[i+2]=='c' && a[i+3]=='a' && a[i+4]=='n' && a[i+5]=='t' && a[i+6]=='i' && a[i+7]=='s')
        {
            j=1;
            break;
        }
        else
            j=0;
    }

    if(j==1)
        printf("Regiao Norte\n");
    else
        printf("Outra regiao\n");
    return 0;
}
