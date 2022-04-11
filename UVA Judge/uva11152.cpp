#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
#define pi acos(-1.0)
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    double a,b,c,sun,vio,rose,icr,ocr,tri,s;

    while(scanf("%lf %lf %lf",&a,&b,&c)==3)
    {
        s=(a+b+c)/2.00;
        tri=sqrt(s*(s-a)*(s-b)*(s-c));

        ocr=(a*b*c)/(4.00*tri);
        sun=pi*ocr*ocr;

        icr=tri/s;
        rose=pi*icr*icr;

        vio=tri-rose;
        sun=sun-tri;

        printf("%.4lf %.4lf %.4lf\n",sun,vio, rose);
    }

    return 0;
}
