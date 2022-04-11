#include<stdio.h>
int main()
{

    double a,x=0,av;
    int i,c=0;
    for(i=0; i<6 ;i++){

        scanf("%lf",&a);
        if(a > 0 )
             {
             x += a;
            c++;
             }
    }
    av = x/c;

    printf("%d valores positivos\n%.1lf\n",c,av);

    return 0;
}

