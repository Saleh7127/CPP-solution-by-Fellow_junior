#include<stdio.h>
int main()
{
    int a,i,ar[100],b,x;
    for(i=2; i<a; i++)
        ar[0]=0;
    ar[1]=1;
        ar[i]=ar[i-1]+ar[i-2];
         scanf("%d",&a);
    for(b=0; b<a; b++)
    {
        scanf("%d",&x);
        printf("Fib(%d) = %d\n",x,ar[x]);
    }
return 0;
}
