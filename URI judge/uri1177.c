#include<stdio.h>
int main()
{

    int a,i,x=0,N[1000];
    scanf("%d",&a);
    for(i=0; i<1000; i++)
    {

        printf("N[%d] = %d\n",i,x);
        x++;
      if(x==a)x=0;

    }
    return 0;
}
