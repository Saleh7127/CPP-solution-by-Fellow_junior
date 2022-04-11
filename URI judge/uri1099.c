#include<stdio.h>
int main()
{
    int n,a,b,i,x,sum=0,temp;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d %d",&a,&b);
        if(a>b){temp=a;a=b;b=temp;}
        if(a%2==0)a++;
        else a+=2;
        for(x=a;x<b;x+=2){
            sum+=x;
        }

       printf("%d\n",sum);
       sum=0;

    }

return 0;
}
