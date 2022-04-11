#include<stdio.h>
int main()
{
    double A,B,C,P,Ar;
    scanf("%lf %lf %lf",&A,&B,&C);
    P = A+B+C;
    Ar = ((A+B)*C)/2;
    if( A+B > C && B+C > A && C+A > B)
    printf("Perimetro = %.1lf\n",P);
    else {
        printf("Area = %.1lf\n",Ar);
    }
    return 0;
}
