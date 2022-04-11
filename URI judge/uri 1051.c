#include<stdio.h>
int main()
{
    double x;
    scanf("%lf",&x);
    if(x>= 0 && x<= 2000)printf("Isento\n");
    else if(x>2000 && x<= 3000){
        x = x - 2000;
        x = (x*8)/100;
        printf("R$ %.2lf\n",x);
    }
    else if(x>3000 && x<=4500){
        x=x-3000;
        x= (x*18)/100;
        printf("R$ %.2lf\n",x+80);
    }
    else if(x > 4500){
        x=x-4500;
        x=(x*28)/100;
        printf("R$ %.2lf\n",x+80+270);
    }


    return 0;

}
