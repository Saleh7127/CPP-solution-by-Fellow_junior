#include<stdio.h>
int main()
{
    int a,b,i,j,c=0;
    char d[1000];
    scanf("%d",&a);
    for(j=0; j<a; j++)
    {
        c=0;
        scanf("%d",&b);
        scanf("%s",d);
        for(i=0; i<b; i++)
        {
            if(d[i]=='A' && d[i+1]=='P')
            {
               d[i+1]=='A';
            }
        }
        printf("%d",c);
    }
    return 0;
}
