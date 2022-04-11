#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define sc(a) scanf("%lld",&a)
#define sc2(a,b) scanf("%lld %lld",&a,&b)
#define pf(a) printf("%lld",a)
#define loop1(i,a,c) for(i=a;i<=c;i++)
#define loop(i,c) for(i=0;i<c;i++)
int main()
{
    double a,c,d,e,f,h,l;
    cin>>h>>l;
    c=h*h;
    d=l*l;
    a=(d-c)/(2*h);
    printf("%.13lf\n",a);
    return 0;
}
