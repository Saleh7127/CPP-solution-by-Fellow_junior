#include<stdio.h>
int main()
{
    int a,i,b;
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        scanf("%d",&b);
        if(b>=2015) printf("%d A.C.\n",b-2014);
        if(b<2015) printf("%d D.C.\n",2015-b);

    }
    return 0;
}
