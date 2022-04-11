#include<stdio.h>
int main()
{
    double l,sm,s=0.0,an=0.0,a[1000];
    int i;
    for(i=0; i<5; i++)
    {
        scanf("%lf",&a[i]);
        s+=a[i];
    }
    l=a[0];
    sm=a[0];
    for(i=0; i<5; i++)
    {

        if(a[i]>=l)
        {
            l=a[i];
        }
        if(sm>=a[i])
        {
            sm=a[i];
        }
    }
    an = s-l-sm;
    printf("%.1lf\n",an);

    return 0;
}
