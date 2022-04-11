#include<stdio.h>
int main ()
 {
     int j=0;
   double a,x=0;

   for( ; ; )
   {

    if(j==2) break;
    scanf("%lf",&a);

    if(a>0 && a<=10){
        j++;
        x+=a;
    }

   else printf("nota invalida\n");

   }

      printf("media = %.2lf\n",x/2.00);

   return 0;
  }

