#include<bits/stdc++.h>
using namespace std;
int main()
{

    long long int a,b=0,c=0,d=0,e,f=0,j;
    scanf("%lld",&a);
    b=(a*a*a);
    c=(6*a*a);
    d=(23*a);
    f =(a*(b-c+d-18))/24+1;

    printf("%lld\n",f);

    return 0;
}

