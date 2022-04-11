#include<stdio.h>
int main()
{
    int i,a,b[1050];
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        scanf("%d",&b[i]);
        if(i==0) printf("%d\n",b[i]);

    }
    return 0;
}
