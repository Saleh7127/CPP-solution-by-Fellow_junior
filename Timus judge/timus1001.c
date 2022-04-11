#include <stdio.h>
#include <math.h>
double b[200000];
int main()
{N
    int i=0;
    unsigned long long a,c,d,e,f;
    while (scanf("%llu",&a) != EOF)
    {
        b[i++] =(double)sqrt(a*1.0);
    }
    while(i--)
    {
        printf("%.4lf\n", b[i]);
    }
    return 0;
}
