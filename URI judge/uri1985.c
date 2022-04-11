#include<stdio.h>
int main()
{
    double i,a,b,c,d=0;
    scanf("%lf",&a);
    for(i=0;i<a;i++){

        scanf("%lf %lf",&b,&c);
        if(b==1001){d+=(c*1.50);}
          if(b==1002){d+=(c*2.50);}
            if(b==1003){d+=(c*3.50);}
              if(b==1004){d+=(c*4.50);}
                if(b==1005){d+=(c*5.50);}
    }
    printf("%.2lf\n",d);
}
