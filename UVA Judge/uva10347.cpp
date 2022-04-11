
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{



    double a,b,c,s,i,j,k,l;

    while(scanf("%lf %lf %lf",&a,&b,&c)!=EOF)
    {
        if(a+b>c && b+c>a && a+c>b)
        {
            l=(a+b+c)/2.00;

            s=sqrt(l*(l-a)*(l-b)*(l-c));

            k=s*(100.000/75.000);

            printf("%.3lf\n",k);
        }
        else
        {
            printf("-1\n");
        }
    }

    return 0;
}
