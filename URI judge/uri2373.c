#include<stdio.h>
int main()
{

    int n,i,a,b,s=0;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d %d",&a,&b);
        if( a>b )
        {
            s+=b;
        }
    }
    printf("%d\n",s);
    return 0;
}
