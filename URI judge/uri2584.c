#include<stdio.h>
#include<math.h>
int main()
{
    double n,a,ar,b;
    int i;
    scanf("%lf",&n);
    for(i=0;i<n;i++)
        {
        scanf("%lf",&a);
        b= 5+(2*(sqrt(5)));
        ar= (sqrt(5*b)*a*a)/4;
        printf("%.3lf\n",ar);
    }
}
