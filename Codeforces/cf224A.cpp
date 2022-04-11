#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e,f,i,j,k,l;
    scanf("%d %d %d",&a,&b,&c);
    d= sqrt((a*b)/c);
    e= sqrt((c*b)/a);
    f= sqrt((a*c)/b);
    i=(d+e+f)*4;
    printf("%d\n",i);

    return 0;
}
