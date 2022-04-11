#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{



    int tt;

    scanf("%d",&tt);

    while(tt>0)
    {
        double s,a,b,c,d,e,f;

        scanf("%lf %lf %lf",&a,&b,&c);


        d=1.00/a;
        e=1.00/b;
        f=1.00/c;

        s=(d+e+f)*(d+e-f)*(d+f-e)*(e+f-d);

        if(a==0 || b==0 || c==0 || s<=0)
        {
            printf("These are invalid inputs!\n");
            tt--;
        }

        else
        {
            s=sqrt(s);
            printf("%.3lf\n",1.0/s);
        }

    }


    return 0;
}
