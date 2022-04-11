#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
    double n, p;
    while(scanf("%lf%lf",&n,&p) == 2)
    {
        printf("%.0lf\n",pow(p,1/n));
    }
    return 0;
}
