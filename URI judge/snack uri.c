#include<stdio.h>
int main()
{
    int X,Y;
    double s;
    scanf("%d %d",&X,&Y);
    if(X==1){
     s=4.00*Y;
     printf("Total: R$ %.2lf\n",s);
    }
    else if(X==2){
        s=4.50*Y;
        printf("Total: R$ %.2lf\n",s);
    }
    else if(X==3){
        s=5.00*Y;
        printf("Total: R$ %.2lf\n",s);
    }
    else if(X==4){
        s=2.00*Y;
        printf("Total: R$ %.2lf\n",s);
    }
    else if(X==5){
        s=1.50*Y;
        printf("Total: R$ %.2lf\n",s);
    }

    return 0;
}
