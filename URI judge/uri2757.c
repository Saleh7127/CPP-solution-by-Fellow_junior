#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000],b[1000],c[1000];
    int i,j,k;
    scanf("%s %s %s",&a,&b,&c);
    printf("A = %s, B = %s, C = %s\n",a,b,c);

    printf("A =           %s, B =           %s, C =           %s\n",a,b,c);

    if(a[0]=='-')
        printf("A = -");
    else
        printf("A = ");
    for( i=0; i<10-strlen(a); i++)
    {
        printf("0");
    }
    printf("%s",a);


    if(b[0]=='-')
        printf("B = -");
    else
        printf("B = ");

    for( j=0; j<10-strlen(b); j++)
    {
        printf("0");
    }
    printf("%s",b);


    if(c[0]=='-')
        printf("C = -");
    else
        printf("C = ");
    for( k=0; k<10-strlen(c); k++)
    {
        printf("0");
    }
    printf("%s",c);


    printf("\n");

    printf("A = %s          , B = %s          , C = %s          \n",a,b,c);

    return 0;
}
