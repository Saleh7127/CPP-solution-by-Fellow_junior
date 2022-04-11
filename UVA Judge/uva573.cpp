#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c,j,k,h,u,d,f;
    while(scanf("%lf %lf %lf %lf",&h,&u,&d,&f)==4)
    {
        int i,l;
        i=1;
        a=0;
        c=(f*u)/100;
        if(h==0)
            break;
        for( ; ; )
        {
            a+=u;
            if(u>0) u-=c;

            if(a>h)
            {
                break;
            }
            a-=d;

            if(a<0)
            {
                break;
            }
            i++;
        }
        if(a<0)
            printf("failure on day %d\n",i);
        else
        {
            printf("success on day %d\n",i);
        }
    }
    return 0;
}
