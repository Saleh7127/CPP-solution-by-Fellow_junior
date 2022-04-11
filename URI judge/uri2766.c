#include<stdio.h>
#include<string.h>
int main()
{
    char as[100];
    int i;
    for(i=1;i<=10;i++)
    {
        scanf("%s",&as);

        if(i==3 || i==7 || i==9) printf("%s\n",as);
    }
 return 0;
}
