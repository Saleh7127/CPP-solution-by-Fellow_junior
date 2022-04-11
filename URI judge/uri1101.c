#include<stdio.h>
int main()
{
    int i,a,b,c,temp,sum=0;
    for(;i;i++)
        {
        scanf("%d %d",&a,&b);
    if(a<=0 || b<=0) break;
    if(a>b) {temp=a;a=b;b=temp;}
    for(c=a;c<=b;c++){
        printf("%d ",c);
        sum+=c;
    }
        printf("Sum=%d\n",sum);
        sum=0;


    }

    return 0;


}
