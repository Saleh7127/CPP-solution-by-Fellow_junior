#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b=0.0,c,i,d,j,k;
    scanf("%lf",&a);
    for(i=a;i>=1;i--)
    {
        b+=(1/i);

    }
    printf("%.12lf\n",b);

    return 0;
}

