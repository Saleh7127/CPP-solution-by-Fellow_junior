#include<stdio.h>
int main()
{
    int a,i,b=0;
    scanf("%d",&a);
    for(i=1; i<=(a/2); i++)
    {
        if(a%i ==0)
            b++;
    }
    printf("%d\n",b);
    return 0;
}
