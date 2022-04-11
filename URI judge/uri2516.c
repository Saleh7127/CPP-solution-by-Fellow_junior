#include<stdio.h>
int main()
{
    double  d,m,f,t;
    while(scanf("%lf %lf %lf",&d,&m,&f) != EOF){

        if(f>m) printf("impossivel\n");
        else {
        printf("%.2lf\n",d/(m-f));
        }
    }

    return 0;
}
