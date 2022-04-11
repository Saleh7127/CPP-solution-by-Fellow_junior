#include<stdio.h>
int main()
{
    int a,i,x;
    scanf("%d",&a);
    for(i=a;i>0;i--)
    {

        if(a%i==0){
         printf("%d\n",a/i);
        }
    }
    return 0;
}
