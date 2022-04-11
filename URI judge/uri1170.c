#include<stdio.h>
int main()
{
    int a,i,b;
    double x;
    scanf("%d",&a);
    for(i=0;i<a;i++){

        scanf("%lf",&x);
        b=0;
        while( x>1 ){
            x/=2;
            b++;
        }
      printf("%d dias\n",b);
    }

    return 0;
}
