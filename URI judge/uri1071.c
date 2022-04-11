#include<stdio.h>
int main()
{
    int a,b,n,i,temp,sum=0;
    scanf("%d %d",&a,&b);
    if(a>b) {temp=b;b=a;a=temp;}
    if(a%2== 0){a++; n=a;}
    else n = a+2;
    for(i=n;i<b;i+=2){
            sum += i;
    }
    printf("%d\n",sum);
    return 0;

}
