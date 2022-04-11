#include <bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c,d,e,f,g,h;
    int i,j,k;
    scanf("%lf %lf",&a,&b);
    c= (a*b);
    for(i=10; i<=90; i+=10)
    {
        d=(i*c)/100;

        if(i==90)
            printf("%.0lf",ceil(d));
        else
            printf("%.0lf ",ceil(d));
    }

    printf("\n");

    return 0;
}
