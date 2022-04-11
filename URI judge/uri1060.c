#include<stdio.h>
int main()
{

    int i,c=0;
    double a;
    for(i=0; i<6 ;i++){

        scanf("%lf",&a);
        if(a > 0 ) c++;
    }

    printf("%d valores positivos\n",c);

    return 0;
}
