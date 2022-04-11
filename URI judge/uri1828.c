#include<stdio.h>
int main()
{
    int k,j;
    char a[15],b[15];
    scanf("%d",&j);
    for(k=1; k<=j; k++)
    {
        scanf("%s %s",a,b);
        if(0 == strcmp(a,b))
            printf("Caso #%d: De novo!\n",k);
        else if(a[0]=='t' && b[0]=='p' && b[1]=='a')
            printf("Caso #%d: Bazinga!\n",k);
        else if(a[0]=='p' && a[1]=='a' && b[0]=='p' &&  b[1]=='e')
            printf("Caso #%d: Bazinga!\n",k);
        else if(a[0]=='p' && a[1]=='e' && b[0]=='l')
            printf("Caso #%d: Bazinga!\n",k);
        else if(a[0]=='l' && b[0]=='S')
            printf("Caso #%d: Bazinga!\n",k);
        else if(a[0]=='S' && b[0]=='t')
            printf("Caso #%d: Bazinga!\n",k);
        else if(a[0]=='t' && b[0]=='l')
            printf("Caso #%d: Bazinga!\n",k);
        else if(a[0]=='l' && b[0]=='p' && b[1]=='a')
            printf("Caso #%d: Bazinga!\n",k);
        else if(a[0]=='p' && a[1]=='a' && b[0]=='S')
            printf("Caso #%d: Bazinga!\n",k);
        else if(a[0]=='S' && b[0]=='p' && b[1]=='e')
            printf("Caso #%d: Bazinga!\n",k);
        else if(a[0]=='p' && a[1]=='e' && b[0]=='t')
            printf("Caso #%d: Bazinga!\n",k);

        else
            printf("Caso #%d: Raj trapaceou!\n",k);

    }
      return 0;
}
