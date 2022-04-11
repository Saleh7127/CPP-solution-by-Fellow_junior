#include<bits/stdc++.h>
using namespace std;
double a[100000];
int i=0,j,k,l;
unsigned long long b,c,d,e;
int main()
{
    while(scanf("%lld",&b)!=EOF)
    {
        a[i++]=(double)sqrt(b*1.00);
    }
    while(i--)
    {
        printf("%.4lf",a[i]);
    }
    return 0;
}
