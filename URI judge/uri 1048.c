#include<stdio.h>
int main()
{

    double x,y,z;

    scanf("%lf",&x);
    if(x>= 0 && x<= 400.00){
        y = (x*15)/100 ;
        z = x+y ;
        printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 15 %%\n",z,y);

    }
    else if(x>= 400.01 && x<= 800.00){
        y = (x*12)/100 ;
        z = x+y ;
        printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 12 %%\n",z,y);

    }
    else if(x>= 800.01 && x<= 1200.00){
        y = (x*10)/100 ;
        z = x+y ;
        printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 10 %%\n",z,y);

    }
    else if(x>= 1200.01 && x<= 2000.00){
        y = (x*7)/100 ;
        z = x+y ;
        printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 7 %%\n",z,y);

    }
    else if(x>2000.00){
        y = (x*4)/100 ;
        z = x+y ;
        printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 4 %%\n",z,y);

    }
    return 0;
}
