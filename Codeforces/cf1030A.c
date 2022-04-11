#include<stdio.h>
int main()
{
    int a,i,c=0;
    scanf("%d",&a);
    int b[10000];
    for(i=0; i<a; i++)
    {
        scanf("%d",&b[i]);
        if(b[i]==1)
        {
            c++;
            break;
        }
    }
    if(c>0)
        printf("HARD\n");
    else
        printf("EASY\n");
    return 0;
}
