#include<stdio.h>
int main()
{
    int a,i,j,s=0;
    scanf("%d",&a);
    int b[a];
    for(i=0; i<a; i++)
    {
        scanf("%d",&b[i]);
    }
    for(j=0; j<a; j++)
    {
        if(b[j]!=b[j+1])
            s++;
    }
    printf("%d\n",s);

    return 0;
}
