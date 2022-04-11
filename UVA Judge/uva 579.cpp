#include<bits/stdc++.h>
using namespace std;
#define ll  long long
int main()
{
    double a,c,d,e,f,h,m,i,j,k,l;
    while(1)
    {
        scanf("%lf:%lf",&h,&m);
        if(h==0 && m==0) break;
        c=h*30+(m/60)*30;
        d=m*6;
        a=fabs(c-d);
        if(a>180) a=360-a;
        printf("%.3lf\n",a);
    }
    return 0;
}
