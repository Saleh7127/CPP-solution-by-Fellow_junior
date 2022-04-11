#include<stdio.h>
int main()
{

    double o,b,i;
    scanf("%lf %lf %lf",&o,&b,&i);
    if(o<b && o<i) printf("Otavio\n");
    else if(b<o && b<i) printf("Bruno\n");
     else if(i<b && i<o) printf("Ian\n");
     else printf("Empate\n");


     return 0;
}
