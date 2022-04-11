#include<stdio.h>
int main()
{
    int n,i,a,b,e;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&a,&b);
            e=(a/b)+(a%b) ;
            printf("%d\n",e);

    }
    return 0;
}
