#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,d,e,f,i,j,k,l;
    cin>>a>>b;
    while(a!=0 && b!=0)
    {
        if(a>= 2*b)
        {
            a=a%(2*b);
        }
        else if(b>=a*2)
        {
            b=b%(2*a);
        }
        else break;
    }
    printf("%lld %lld\n",a,b);
    return 0;
}
