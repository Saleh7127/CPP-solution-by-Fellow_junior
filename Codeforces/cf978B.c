#include<stdio.h>
int main()
{
    int i,j=0,a;
    char b[1000];
    scanf("%d",&a);
    scanf("%s",b);
    for(i=0; i<a-2; i++)
    {
        if(b[i]=='x' && b[i+1]=='x' && b[i+2]=='x')
        {
            j++;
        }
    }
    printf("%d\n",j);

    return 0;
}
