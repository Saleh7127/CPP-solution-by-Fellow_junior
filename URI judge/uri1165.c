#include<stdio.h>
int main()

{
    int a,i,b;
    scanf("%d",&a);
    for(i=0;i<a;i++){
        scanf("%d",&b);
        if(b<4) printf("%d eh primo\n",b);
        if(b==5 || b==7) printf("%d eh primo\n",b); break;
        if(b%2==0 || b%3==0 || b%5==0 || b%7==0)printf("%d nao eh primo\n",b);


    }
    return 0;
}
