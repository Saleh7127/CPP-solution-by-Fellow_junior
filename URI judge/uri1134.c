#include<stdio.h>
int main()

{
    int a,x=0,y=0,z=0;
    printf("MUITO OBRIGADO\n");
    for( ; ; )
    {
        scanf("%d",&a);
        if(a==4)break;
        if(a>0 && a<4){
            if(a==1)x++;
            if(a==2)y++;
            if(a==3)z++;
        }
    }
        printf("Alcool: %d\n",x);
        printf("Gasolina: %d\n",y);
        printf("Diesel: %d\n",z);

    return 0;
}
