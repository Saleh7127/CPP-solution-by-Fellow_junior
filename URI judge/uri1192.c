#include<stdio.h>
int main()
{
    int a,b,i,n;
    char c;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d%c%d",&a,&c,&b);

         if(a>=65 && b<=90 && a!=b) printf("%d\n",b-a);
         else if(a>=65 && b<=90 && a==b) printf("%d\n",a*b);
        else printf("%d\n",b+a);

    }
    return 0;
}
