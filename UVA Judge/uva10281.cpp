#include<bits/stdc++.h>
using namespace std;
int main()
{
    char   x[128];
    int    a,h,m,s,t=0,t1 = 0;
    double dis = 0.0,v=0.0,v1=0.0;

    while ( gets(x) )
    {
        a  = sscanf(x,"%d:%d:%d %lf",&h,&m,&s,&v1);

        t1 = h*3600+m*60+s;

        dis += v*(t1-t)/3600.0;

        t = t1;

        if (a == 3 )
            printf("%.2d:%.2d:%.2d %.2lf km\n",h,m,s,dis);
        else
            v = v1;
    }
    return 0;
}
