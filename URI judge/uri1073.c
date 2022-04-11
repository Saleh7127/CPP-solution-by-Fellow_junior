#include<stdio.h>
int main()
{
   int a,i,b;
   scanf("%d",&a);
   for(i=2;i<=a;i+=2){
    if(a%2 !=0) a++;
    b=i*i;
    printf("%d^2 = %d\n",i,b);
   }

 return 0;
}
